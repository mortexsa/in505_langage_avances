#include <iostream>
#include <string>

using namespace std;


template <typename T>
inline T GetMax(const T & a, const T & b) {
    return ((a > b) ? (a) : (b));
}


int main() {
    string jj = "jeremy";
    string ii = "andy";

    string kk;
    int i=0, j=6, k;
    k = GetMax(i,j);
    kk = GetMax(ii,jj);
    cout << k << endl;
    //cout << kk << endl;
    char * b = "andy";
    char * a = "jeremy";

    char *c = GetMax(a,b);
    cout<< c << endl;

    return 0;
}