#include <avr/io.h>
#include <util/delay.h>

#define button (1<<PC5)
#define PWM_LED (1<<PB1)

void init_PWM(){
	TCCR1A |= (1<<COM1A1) | (1<<WGM10);
	TCCR1B |= (1<<WGM12) | (1<<CS11);
	OCR1A = 0;
}

void init_ADC(){
	ADMUX |= (1 << REFS0);
	ADCSRA |= (1 << ADPS1) | (1 << ADPS0);
	ADCSRA |= (1 << ADEN);
}


int main(void){

DDRB |=  PWM_LED;
PORTC |= button;

init_PWM();
init_ADC();

int fotorezystor;
int PWM=0;
int latch=0;
    while(1) {
		ADCSRA |= (1 << ADSC);
		loop_until_bit_is_clear(ADCSRA, ADSC);
		fotorezystor= ADC;

		if((fotorezystor%4)==0){
			PWM=fotorezystor/4;
		}
		if(!(PINC & button)){
			if(latch==0){
				latch=1;
			}
			else{
				latch=0;
			}
			_delay_ms(50);
		}
		if(latch==0){
		OCR1A = PWM;
		}

		_delay_ms(50);
		}

    }