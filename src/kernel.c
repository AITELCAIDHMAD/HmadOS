#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"

 kmain()
{
		isr_install();
        clearScreen();
        menu();
        launch_shell(0);
}
