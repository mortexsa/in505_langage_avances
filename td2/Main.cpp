#include <iostream>
#include <string.h>
#include "Vecteur.h"

using namespace std;

int main(){
    Vecteur test(5);
    test += 5;
    test = test + 1;
    cout<<test<<endl;
    return 0;
}