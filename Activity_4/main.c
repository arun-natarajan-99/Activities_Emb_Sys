/*
 */

#include <avr/io.h>
#include<util/delay.h>
#include "uart.h"

int main(void)
{
    char data;
    DDRB|=(1<<PB0);
    USARTInit(103);



    while(1)
    {
      data=USARTReadChar();
       // USARTWriteChar('A');
        if(data=='A')
        {
            PORTB|=(1<<PB0);
            _delay_ms(200);
            PORTB&=~(1<<PB0);
            _delay_ms(200);
        }
    }

    return 0;
}
