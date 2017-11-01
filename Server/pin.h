#ifndef PIN_H
#define PIN_H


class Pin
{
public:
    Pin(int numar,int directia,int starea );
    int get();
     void set(int p);
    void change();
protected:
int numar;
int directia;
int stare;

};



#endif // PIN_H
