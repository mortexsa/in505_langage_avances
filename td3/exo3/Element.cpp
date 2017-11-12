#include "Element.h"

using namespace std;

Element::Element(){
    m_nombre = 0;
    m_suivant = NULL;
}
Element::Element(const int nombre){
    m_nombre = nombre;
    m_suivant = NULL;
}
Element::Element(const Element& element){
    m_nombre = element.m_nombre;
    m_suivant = NULL;
}
Element::~Element(){}
int Element::getElement(){
    return m_nombre;
}
void Element::setElement(Element& element){
    m_nombre = element.m_nombre;
}
Element* Element::getSuivant(){
    return m_suivant;
}