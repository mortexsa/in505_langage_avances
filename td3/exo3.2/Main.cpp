#include <iostream>
#include "CList.h"
#include "CPile.h"
#include "CFile.h"

using namespace std;


int main(){
    CPile pile;
    CFile file;
    CList* ptList = &file;
    * ptList < 0 < 1 < 2; //empiler deux valeurs dans la file
    cout << * ptList;
    int i;
    * ptList > i;
    //récupérer une valeur de la file dans i
    cout << * ptList << " i=" << i << endl;
    ptList = &pile;
    * ptList < 0 < 1 < 2; //empiler deux valeurs dans la pile
    cout << *ptList;
    * ptList > i;
    //récupérer une valeur de la pile dans i
    cout << * ptList << " i=" << i << endl;
    
    return 0;
}