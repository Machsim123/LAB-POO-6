#include "Cont_Economii_Promo.h"

void Cont_Economii_Promo::set_info_promo(char *v)
{
    if(v==NULL)
        info_promo=NULL;
    else
    {
        info_promo=new char[strlen(v)+1];
        strcpy(info_promo,v);
    }
}

Cont_Economii_Promo::Cont_Economii_Promo(char v[],int s, char* p, double d, int b, char * info):Cont_Economii(v,s,p,d),bonus_fix(b)
{
    set_info_promo(info);
}

Cont_Economii_Promo::Cont_Economii_Promo(const Cont_Economii_Promo &c):Cont_Economii(c),bonus_fix(c.bonus_fix)
{
    set_info_promo(c.info_promo);
}

Cont_Economii_Promo& Cont_Economii_Promo:: operator=(const Cont_Economii_Promo &c)
{
    ///cout<<"SUNT IN OP EGAL"<<endl;
    Cont_Economii::operator=(c);
    ///cout<<"INCA SUNT"<<endl;
    bonus_fix= c.bonus_fix;
    set_info_promo(c.info_promo);
    return (*this);
}

Cont_Economii_Promo::~Cont_Economii_Promo()
{
    delete [] info_promo;
    info_promo= NULL;
}

void Cont_Economii_Promo::afisare()
{
    Cont_Economii::afisare();
    cout<<"bonus_fix: "<<bonus_fix<<endl;
    cout<<"info_promo: "<<info_promo<<endl;
    cout<<endl<<endl;
    cout<<"////////////////////////"<<endl;
}

/*friend*/ istream& operator>>(istream &dev, Cont_Economii_Promo &c)
{
    char aux1[200], aux2[200];
    cout<<"IBAN: ";
    dev>>c.IBAN;

    cout<<"suma: ";
    dev>>c.suma;
    cout<<"proprietar: ";
    dev>>aux1;
    if(aux1==NULL)
        c.proprietar=NULL;
    else
    {
        c.proprietar=new char[strlen(aux1)+1];
        strcpy(c.proprietar,aux1);
    }
    cout<<"dobanda: ";
    cin>>c.dobanda;
    cout<<"bonus_fix: ";
    cin>>c.bonus_fix;
    cout<<"info_promo: ";
    dev>>aux2;
    if(aux2==NULL)
        c.info_promo=NULL;
    else
    {
        c.info_promo=new char[strlen(aux2)+1];
        strcpy(c.info_promo,aux2);
    }
    return dev;
}

int Cont_Economii_Promo::get_bonus_fix()
{
    return bonus_fix;
}

int Cont_Economii_Promo::get_suma()
{
    return suma;
}

double Cont_Economii_Promo::get_dobanda()
{
    return dobanda;
}

char* Cont_Economii_Promo::get_IBAN()
{
    return IBAN;
}

bool Cont_Economii_Promo::verif_IBAN()
{
    if(strstr(IBAN,"RNCB")!=NULL)
        return 1;
    else
        return 0;
}

void functie(Cont_Economii_Promo* v, int nr)
{
    Cont_Economii_Promo aux;
    for(int i=0; i<(nr-1); i++)
        for(int j=i+1; j<nr; j++)
            if((v)[i].get_bonus_fix()>(v)[j].get_bonus_fix())
                {
                    aux=(v)[i];
                    (v)[i]=(v)[j];
                    (v)[j]=aux;
                }
}

void afisare_finala (Cont_Economii_Promo *v, int nr)
{
    for(int i=0; i<(nr-1); i++)
        if((v[i].get_suma>5000) && v[i].get_dobanda>1 && v[i].verif_IBAN==1)
            v[i].afisare();

}
