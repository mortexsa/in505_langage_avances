#include "CList.h"

using namespace std;

CList::CList() {
    my_type = "CList";
    content = NULL;
}
CList::~CList() {
    if (content != NULL) {
        while (content->next != NULL) {
            Element* tmp = content;
            content = content->next;
            delete tmp;
        }
        delete content;
        content = NULL;
    }
}
CList& CList::operator<(int entier) {
    Element* tmp = new Element;
    tmp->value = entier;
    if (content == NULL) {
        content = tmp; 
        tmp->next = NULL;
    }
    else {
        tmp->next = content;
        content = tmp;
    }
    return *this;
}
CList& CList::operator>(int& entier) {
    cout << " je ne dispose pas de la faculter de suprimer des element d'une liste." << endl;
    return *this;
}
int& CList::operator[](int entier){
    Element* tmp = content;
    int compteur = 1;
    while (tmp != NULL && compteur < entier) {
        tmp = tmp->next;
        compteur++;
    }
    if (tmp = NULL) {
        cout << "index of range" << endl;
        exit(1);
    }
    else return tmp->value;
}
ostream& operator<<(ostream& flux, const CList& list) {
    flux << "Voici une liste de type " << list.my_type << ":";
    if (list.content == NULL) flux << "liste vide" << endl;
    else {
        Element* tmp = list.content;
        while (tmp != NULL) {
            flux << " " << tmp->value;
            tmp = tmp->next;
        }
        flux <<endl;
    }
    return flux;
}