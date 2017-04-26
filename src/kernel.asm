bits    32
section         .text
        align   4
        dd      0x1BADB002
        dd      0x00
        dd      - (0x1BADB002+0x00)

global start
extern kmain     ;call the kmain in the kernel.c
start:
        cli          ;clear interrupt
        call kmain   ;continue executing from the kmain
        hlt          ;arretr cpu
