#include "Cont_Economii.h"

class Cont_Economii_Promo: public Cont_Economii {
 int bonus_fix=0; // ex: 20
 char *info_promo=NULL; //daca suma<1000 bonus fix 50RON, daca suma intre
//1000 și 5000 -> bonus fix 100RON, promo valabil pana la data de 1.12.23
 void set_info_promo(char *);
public:
    Cont_Economii_Promo(char v[]="",int s=0, char* p=NULL, double d=0.1, int b=0, char * info=NULL);
    Cont_Economii_Promo(const Cont_Economii_Promo &);
    Cont_Economii_Promo& operator=(const Cont_Economii_Promo &);
    ~Cont_Economii_Promo();
    void afisare();
    friend istream& operator>>(istream &, Cont_Economii_Promo &);
    int get_bonus_fix();
    int get_suma();
    double get_dobanda();
    char* get_IBAN();
    bool verif_IBAN();
};

void functie(Cont_Economii_Promo *, int );
void afisare_finala (Cont_Economii_Promo *, int);
