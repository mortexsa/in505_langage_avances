#include "CFile.h"
using namespace std;


CFile::CFile() {
    my_type = "CFile";
}
CFile::~CFile() {}
CList& CFile::operator>(int& entier) {
    if (content == NULL) {
        cout << "File vide" << endl;
        exit(1);
    }
    else {
        Element* tmp = content->next;
        if (tmp == NULL) {
            entier = content->value;
            content = NULL;
            delete tmp;
            return *this;
        }
        else {
            Element* aux = tmp;
            while (tmp->next != NULL) {
                aux = tmp;
                tmp = tmp->next;
            }
            entier = tmp->value;
            aux->next = NULL;
            return *this;
        }
    }
}