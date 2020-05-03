#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main ()
{
    int x;
    int ED;
    float PN;
    float AN=0;
    float ANN=0;
    float PJ;
    float AJ=0;
    float AJJ=0;
    float PA;
    float AA=0;
    float AAA=0;
    float PV;
    float AV=0;
    float AVV=0;
    float PRN;
    float PRJ;
    float PRA;
    float PRV;
    for (x=1; x<=50; x++)
    {
        cout << "Ingrese la Edad de la persona\n";
        cin >> ED;
        
        if (ED>0 && ED<=12) {
                 cout << "Es un niño\n"
                 << "Ingrese el peso\n";
                 cin >> PN;
                 AN=AN+PN;
                 ANN=ANN+1;
                 }
        if (ED>12 && ED<=29) {
                  cout << "Es un joven\n"
                 << "Ingrese el peso\n";
                 cin >> PJ;
                 AJ=AJ+PJ;
                 AJJ=AJJ+1;
                  }
        if (ED>29 && ED<=59) {
                  cout << "Es un adulto\n"
                 << "Ingrese el peso\n";
                 cin >> PA;
                 AA=AA+PA;
                 AAA=AAA+1;
                  }
        if (ED>59) {
                   cout << "Es un viejo\n"
                 << "Ingrese el peso\n";
                 cin >> PV;
                 AV=AV+PV;
                 AVV=AVV+1;
                   }
        
        }
        PRN=AN/ANN;
        PRJ=AJ/AJJ;
        PRA=AA/AAA;
        PRV=AV/AVV;
        
        
    system("pause");
    return 0;
}
