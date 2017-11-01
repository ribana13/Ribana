#ifndef PWM_CLASS_H
#define PWM_CLASS_H


class PWM_CLASS
{
public:
    PWM_CLASS(int factor_umplere ,int frecventa);
   void set (int factor_umplere,int frecventa);
   int getDutyCycle();
   int getFrequency();
   private:
   int frecventa;
   int factor_umplere;


};

#endif // PWM_CLASS_H
