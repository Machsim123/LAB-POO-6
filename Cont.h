#include <iostream>
#include <string.h>

using namespace std;


class Cont {
protected:
    char IBAN[8]="";
    int suma=0;
    char* proprietar=NULL; //Ion_Ion
    void set_proprietar(char *);
public:
    Cont(char v[]="",int s=0, char* p=NULL);
    Cont(const Cont &);
    Cont& operator=(const Cont &);
    ~Cont();
    void afisare();
};
