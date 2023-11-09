#include "Cont_Economii.h"

Cont_Economii::Cont_Economii(char v[],int s, char* p, double d):Cont(v,s,p),dobanda(d)
{


}

/*Cont_Economii::Cont_Economii(const Cont_Economii &c):dobanda(c.dobanda)
{
    *this=c;
}

Cont_Economii& Cont_Economii:: operator=(const Cont_Economii &c):Cont(c)
{
    dobanda=c.dobanda;

}

Cont_Economii::~Cont_Economii()
{
*/

void Cont_Economii::afisare()
{
    //(Cont *)this->afisare();
    Cont::afisare();
    cout<<"dobanda: "<<dobanda<<endl;
    cout<<endl<<endl;
}
