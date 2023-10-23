#include <avr/io.h>
#include <util/delay.h>
#include <math.h>


int main()
{
    DDRA = 0xff;
    int temp;

    while(1)
    {
        for(int i = 0; i < 5; i++)
        {
            PORTA = 0xFF;
            _delay_ms(300);
            PORTA = 0x00;
            _delay_ms(300);
            
        }

        for(int i = 0; i < 5; i++)
        {
            PORTA = 0xF0;
            _delay_ms(300);
            PORTA = 0x0F;
            _delay_ms(300);
            
        }

        PORTA = 0b0000001;
        _delay_ms(300);

        for(int i =0 ; i <7 ; i++)
        {
            PORTA = PORTA << 1;
            _delay_ms(300);
        }

        for(int i =0 ; i <8 ; i++)
        {
            temp = 0xFF;
            PORTA = temp - pow(2,i);
            _delay_ms(300);
        }

        
    }
}