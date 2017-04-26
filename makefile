COMPILER = gcc
LINKER = ld
ASSEMBLER = nasm
CFLAGS = -m32 -c -ffreestanding
ASFLAGS = -f elf32
LDFLAGS = -m elf_i386 -T src/link.ld
EMULATOR = qemu-system-i386
EMULATOR_FLAGS = -kernel

OBJS = obj/kasm.o obj/kc.o obj/idt.o obj/isr.o obj/kb.o obj/screen.o obj/string.o obj/system.o obj/util.o obj/shell.o obj/function.o
OUTPUT = HmadOS/boot/kernel.bin

run: all
	$(EMULATOR) $(EMULATOR_FLAGS) $(OUTPUT)

all:$(OBJS)
	mkdir HmadOS/ -p
	mkdir HmadOS/boot/ -p
	$(LINKER) $(LDFLAGS) -o $(OUTPUT) $(OBJS)

obj/kasm.o:src/kernel.asm
	$(ASSEMBLER) $(ASFLAGS) -o obj/kasm.o src/kernel.asm

obj/kc.o:src/kernel.c
	$(COMPILER) $(CFLAGS) src/kernel.c -o obj/kc.o

obj/idt.o:src/idt.c
	$(COMPILER) $(CFLAGS) src/idt.c -o obj/idt.o

obj/kb.o:src/kb.c
	$(COMPILER) $(CFLAGS) src/kb.c -o obj/kb.o

obj/isr.o:src/isr.c
	$(COMPILER) $(CFLAGS) src/isr.c -o obj/isr.o

obj/screen.o:src/screen.c
	$(COMPILER) $(CFLAGS) src/screen.c -o obj/screen.o

obj/string.o:src/string.c
	$(COMPILER) $(CFLAGS) src/string.c -o obj/string.o

obj/system.o:src/system.c
	$(COMPILER) $(CFLAGS) src/system.c -o obj/system.o

obj/util.o:src/util.c
	$(COMPILER) $(CFLAGS) src/util.c -o obj/util.o

obj/function.o:src/function.c
	$(COMPILER) $(CFLAGS) src/function.c -o obj/function.o

obj/shell.o:src/shell.c
	$(COMPILER) $(CFLAGS) src/shell.c -o obj/shell.o

build:all
	rm HmadOS/boot/grub/ -r -f
	mkdir HmadOS/boot/grub/
	echo set default=0 >> HmadOS/boot/grub/grub.cfg
	echo set timeout=0 >> HmadOS/boot/grub/grub.cfg
	echo menuentry "HmadOS" { >> HmadOS/boot/grub/grub.cfg
	echo         set root='(hd96)' >> HmadOS/boot/grub/grub.cfg
	echo         multiboot /boot/kernel.bin >> HmadOS/boot/grub/grub.cfg
	echo } >> HmadOS/boot/grub/grub.cfg

	grub-mkrescue -o HmadOS.iso HmadOS/

clear:
	rm -f obj/*.o /HmadOS/boot/kernel.bin
	rm -r -f HmadOS/
	rm -r -f HmadOS.iso
