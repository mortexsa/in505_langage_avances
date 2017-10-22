#include <iostream>
#include <string.h>
#include "Vecteur.h"

using namespace std;

int main(){
    Vecteur test(5);
    cout<<test<<endl;
    test += 5;
    cout<<test<<endl;
    Vecteur zebi(1);
    cout<<zebi<<endl;
    zebi = test + 1;
    cout<<zebi<<endl;
    zebi[0] = 5;
    cout<<zebi[0]<<endl;
    cout<<zebi<<endl;
    return 0;
}