#include <avr/io.h>

#include<avr/interrupt.h>
void port()
{

 DDRB|=(1<<PB0); // set b0=1 for led
 DDRD&=~(1<<PD0); //clear bit
 PORTD|=(1<<PD0); //SET  BIT
}
