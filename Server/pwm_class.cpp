#include "pwm_class.h"
#define PWM_CHANNEL 0
#include "pin.h"
#include "bcm2835.h"
// This controls the max range of the PWM signal
#define RANGE 1024
PWM_CLASS::PWM_CLASS(int factor_umplere ,int frecventa)
{
    this->frecventa=frecventa;
    this->factor_umplere=frecventa  * factor_umplere/100;
    bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);
    bcm2835_pwm_set_mode(PWM_CHANNEL, 1, 1);
    bcm2835_pwm_set_range(PWM_CHANNEL, RANGE);
    bcm2835_pwm_set_data(PWM_CHANNEL, this->factor_umplere);
}
void PWM_CLASS::set (int factor_umplere, int frecventa){
    this->frecventa=frecventa;
    this->factor_umplere=frecventa  * factor_umplere/100;

    bcm2835_pwm_set_range(PWM_CHANNEL, RANGE);
    bcm2835_pwm_set_data(PWM_CHANNEL, this->factor_umplere);

}
 int PWM_CLASS::getDutyCycle(){
     return this->factor_umplere * 100 / this->frecventa;
 }
int PWM_CLASS::getFrequency(){
    return this->frecventa;
}
