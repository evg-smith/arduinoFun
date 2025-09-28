// Default clock source is internal 8MHz RC oscillator
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main()
{
    DDRB = 0x20;
    PORTB = 0x01;

    while (1)
    {
        if (!(PINB & 0x01))
        {
            PORTB |= 0x20;
        } 
        else
        {
            PORTB &= 0xDF;
        }
    }
}