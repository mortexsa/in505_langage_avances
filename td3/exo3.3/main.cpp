#include <iostream>


#include "CList.h"
#include "CPile.h"
#include "CFile.h"

using namespace std;


int main(){

    // test sur des int et double
    CList<double> list;
    list.operator<(3.0);
    list.operator<(1.5);
    list.operator<(6.6);
    cout << list << endl;

    int i = 50;

    CPile<int> pile;
    pile < 0 < 1 < 2;
    cout << pile << endl;
    pile > i;
    cout << pile << " la valeur de i est : " << i << endl;

    CFile<int> file;
    file < 3 < 4 < 5;
    cout << file << endl;
    file > i;
    cout << file << " la valeur de i est : " << i << endl;

    //test sur des string.
    string provisoir;

    CFile<string> f;
    CList<string> *l = &f;
    f < "bonjour" < "je" < "suis";
    cout << f << endl;
    f > provisoir;
    cout << f << " la valeur de i est : " << provisoir << endl;


    return 0;
}