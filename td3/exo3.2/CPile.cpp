#include "CPile.h"

using namespace std;

CPile::CPile() {
    my_type = "CPile";
}
CPile::~CPile() {}
CList& CPile::operator>(int& entier) {
    if (content == NULL) {
        cout << "Pile vide" << endl;
        exit(1);
    }
    else {
        entier = content->value;
        content = content->next;
        return *this;
    }
}