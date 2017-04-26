#ifndef IDT_H
#define IDT_H
#include "types.h"
#define KERNEL_CS 0x08 //code segment

typedef struct {
    uint16 low_offset;//generate by the low15 in types.h
    uint16 sel; //selector
    uint8 always0;//userspace or kernel
    uint8 flags; //
    uint16 high_offset; //height offset
} __attribute__((packed)) idt_gate_t ;// do not add any thing

typedef struct {
    uint16 limit;//size of array 
    uint32 base;//take @ of idt array
} __attribute__((packed)) idt_register_t;

#define IDT_ENTRIES 256
idt_gate_t idt[IDT_ENTRIES]; //array of 256 element
idt_register_t idt_reg;

//define the  elemnt in the array one by one
void set_idt_gate(int n, uint32 handler);
//after the array is complete we cab send it to the processer
void set_idt();

#endif
