#include "CPile.h"
using namespace std;


CPile::CPile(){}
CPile::~CPile(){}


CPile& CPile::operator<(int nombre){
    Element *tmp = new Element(nombre);
    if(m_premier == NULL){
        m_premier = tmp;
        tmp = NULL;
    }
    else{
        Element *tmp1 = m_premier;
        while(tmp1->getSuivant() != NULL){
            tmp1=tmp1->getSuivant();
        }
        m_premier = tmp;
    }
    return *this;
}