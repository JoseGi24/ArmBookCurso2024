#include "mbed.h"

// Ire modificando este archivo segun mi tp, solo modifique el led2 para pedir revision.

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut LD2(LED2);

    while (true) {
        LD2 = B1_USER;
    }
}
