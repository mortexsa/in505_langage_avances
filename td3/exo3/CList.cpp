#include "CList.h"

using namespace std;

CList::CList(){
    m_premier = NULL;
}

Element* CList::getPremier() const{
    return m_premier;
}
CList::~CList(){
    delete m_premier;
    m_premier = NULL;
}
void CList::afficher(std::ostream &flux) const{
    Element *tmp = new Element();
    tmp = m_premier;
    flux << "[";
    while(tmp != NULL){
        flux <<"<"<<tmp->getElement()<<">";
        tmp = tmp->getSuivant();
    }
    flux << "]";
}
CList& CList::operator>(int& nombre){
    Element *tmp = new Element();
    Element *tmp1 = new Element();
    tmp = m_premier;

    while(tmp != NULL){
        tmp1 = tmp;
        tmp = tmp->getSuivant();
    }
    tmp1 = NULL; 
    nombre = tmp1->getElement();
    return *this;
}
ostream &operator<<(std::ostream &flux, CList const& list){
    list.afficher(flux);
    return flux;
}
