
mov ah,0x0e ; teletype BIOS routine

mov al,'H'
int 0x10
mov al,'E'
int 0x10
mov al,'L'
int 0x10
mov al,'L'
int 0x10
mov al,'O'
int 0x10

mov al,' '
int 0x10


mov al,'H'
int 0x10
mov al,'M'
int 0x10
mov al,'A'
int 0x10
mov al,'D'
int 0x10

mov al,' '
int 0x10


jmp $

times 510 -($-$$) db 0
dw 0xaa55
