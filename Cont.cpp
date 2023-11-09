#include "Cont.h"

void Cont::set_proprietar(char *v)
{
    if(v==NULL)
        proprietar=NULL;
    else
    {
        proprietar=new char[strlen(v)+1];
        strcpy(proprietar,v);
    }
}

Cont::Cont(char v[],int s, char* p):suma(s)
{
    strcpy(IBAN,v);
    set_proprietar(p);
}

Cont::Cont(const Cont &c):suma(c.suma)
{
    strcpy(IBAN,c.IBAN);
    set_proprietar(c.proprietar);
}

Cont& Cont::operator=(const Cont &c)
{
    strcpy(IBAN,c.IBAN);
    suma=c.suma;
    set_proprietar(c.proprietar);
    return (*this);
}

Cont::~Cont()
{
    ///delete [] IBAN;
    delete [] proprietar;
    proprietar=NULL;
}

void Cont::afisare()
{
    cout<<"IBAN: "<<IBAN<<endl;
    cout<<"suma: "<<suma<<endl;
    cout<<"proprietar: "<<proprietar<<endl;
    cout<<endl<<endl;
}
