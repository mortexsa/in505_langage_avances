#include <iostream>
#include "CList.h"
#include "CPile.h"

using namespace std;


int main(){
    CPile pile;
    CList* ptList = &pile;
    * ptList < 0 < 1; //empiler deux valeurs dans la file
    cout << * ptList;
    int i;
    * ptList > i; //récupérer une valeur de la file dans i
    cout << * ptList << " i=" << i;
    ptList = &pile;
    * ptList < 0 < 1; //empiler deux valeurs dans la pile
    cout << *ptList;

    return 0;
}