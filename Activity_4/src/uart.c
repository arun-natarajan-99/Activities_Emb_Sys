#include <avr/io.h>
#include<util/delay.h>


void USARTInit(uint16_t ubrr_value)
{
    //set baud rate

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    //ENABLE THE RECEIVER AND TRANSMITTER

    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

char USARTReadChar()
{
    //wait untill a data is available
    while(!(UCSR0A & (1<<RXC0)))
    {

    }
    return UDR0;
}

void USARTWriteChar(char data)
{
      while(!(UCSR0A & (1<<UDRE0)))
    {

    }
}
