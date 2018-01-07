#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cxxabi.h>

using namespace std;




template <class T>
class Pair {
protected:
    T m_premier;
    T m_second;
    string type_name(){
        int status;
        string tname = typeid(T).name();
        char *demangled_name = abi::__cxa_demangle(tname.c_str(), NULL, NULL, &status);
        if(status == 0) {
            tname = demangled_name;
            free(demangled_name);
        }
        return tname;
    }
public:
    Pair(const T & a, const T & b){
        this->m_premier = a;
        this->m_second = b;
    }
    ~Pair() {
    }
    T& getMax() {
        string type = type_name();
        if (type == "int") {
            return ((this->m_premier > this->m_second) ? (this->m_premier) : (this->m_second));
        }
        else if (type == "float") {
            return ((this->m_premier > this->m_second) ? (this->m_premier) : (this->m_second));
        }
        else {
            cout << "fonction pas encore implémentée pour le type donné";
            exit(0);
        }
    }
};


int main() {

    double i=5, j=6;
    Pair<double> myInts (i,j);
    cout << myInts.getMax() << endl;

    return 0;
}