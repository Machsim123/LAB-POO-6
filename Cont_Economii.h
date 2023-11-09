#include "Cont.h"

class Cont_Economii: public Cont {
protected:
    double dobanda=0.1;// ex: 1.2%
public:
    Cont_Economii(char v[]="",int s=0, char* p=NULL, double d=0.1);
    ///Cont_Economii(const Cont_Economii &);
    ///Cont_Economii& operator=(const Cont_Economii &);
    ///~Cont_Economii();
    void afisare();
};
