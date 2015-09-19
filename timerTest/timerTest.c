/*
 * timerTest.c
 *
 * Created: 09.08.2015 21:52:11
 *  Author: Валера
 */ 

//Комментарий для тестирования гитхаба
//Комментарий для тестирования гитхаба
//Комментарий для тестирования гитхаба
#include <avr/io.h>
#include <avr/interrupt.h>
ISR (TIMER0_OVF_vect)
{
	PORTD ^= 1 << PD2;
}
int main(void)
{
	DDRD = 0xFF;
	sei();
	TCCR0 |= 1 << CS00;
	TIMSK |= 1 << TOIE0;
    while(1)
    {
        //TODO:: Please write your application code 
    }
}

