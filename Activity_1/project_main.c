/**
 * @file project_main.c
 * @author Arun Natarajan (arun291999@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-04-20
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "atm328.h"
#include <avr/io.h>
#include <util/delay.h>



 void port();

int main(void)
{
port();

    while(1)
    {
        if(!(PIND&(1<<PD0))) // switch press
        {
         PORTB|=(1<<PB0); // LED ON
         _delay_ms(2000); // Delay 2000ms
        }
        else
        {
          PORTB&=~(1<<PB0); //LED Off
         _delay_ms(2000); //Delay 2000ms
        }
       /* PORTB|=(1<<PB0);
        _delay_ms(2000);
        PORTB&=~(1<<PB0);
        _delay_ms(2000); */
    }

    return 0;
}


