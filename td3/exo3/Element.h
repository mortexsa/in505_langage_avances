#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>

class Element {
    protected:
        int m_nombre;
        Element *m_suivant;
    public:
        Element();
        Element(const int nombre);
        Element(const Element& element);
        ~Element();
        int getElement();
        Element* getSuivant();
        void setElement(Element& element);
};

#endif 