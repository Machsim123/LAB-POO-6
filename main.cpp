#include "Cont_Economii_Promo.h"
int main()
{
    /*Cont x;
    ///x.afisare();
    char prop[200]="Ion";
    int l=100;
    Cont y("RO72134",l,prop);
    //y.afisare();
    x=y;
    //x.afisare();
    Cont z(x);
    //z.afisare();



    Cont_Economii xx;
    ///xx.afisare();
    Cont_Economii yy("RO72134",l,prop,1.1);
    ///yy.afisare();
    xx=yy;
    ///xx.afisare();
    Cont_Economii zz(yy);
    ///zz.afisare();



    char inf[200]="DACA <100000, ATUNCI BONUS FIX -0.2";
    Cont_Economii_Promo xxx;
    ///xxx.afisare();
    Cont_Economii_Promo yyy("RO72134",l,prop,1.1,11,inf);
    yyy.afisare();
    xxx=yyy;
    xxx.afisare();
    Cont_Economii_Promo zzz(xxx);
    zzz.afisare();*/

    Cont_Economii_Promo vect[2];
    for(int i=0; i<2; i++)
        cin>>vect[i];
    functie(vect,2);
    afisare_finala(vect,2);
    return 0;
}
