/* 
 * File:   interupt_test_main.c
 * Author: eevgs
 *
 * Created on September 23, 2025, 2:46 PM
 */

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL

int main()
{
    DDRB = 1 << DDB5;
    
    while (1)
    {
        PORTB |= (1 << PORTB5);
        _delay_ms(15000);
        PORTB &= ~(1 << PORTB5);
        _delay_ms(15000);
    }
}

