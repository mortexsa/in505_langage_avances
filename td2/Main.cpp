#include <iostream>
#include <string.h>
#include "Vecteur.h"

using namespace std;

int main() {
    Vecteur test(5);
    test[0] = 1;
    test[1] = 2;
    test[2] = 3;
    test[3] = 4;
    test[4] = 5;
    cout<<test<<endl;
    Vecteur cool(1);
    cool[0] = 6;
    cout<<cool<<endl;
    cool = cool+test;
    cout<<cool<<endl;
    return 0;
}