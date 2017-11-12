#ifndef CLIST_H
#define CLIST_H

#include <iostream>
#include "Element.h"

class CList {
    protected:
        Element *m_premier;
    public:
        CList();
        ~CList();
        Element* getPremier() const;
        virtual CList& operator<(int nombre) = 0;
        CList& operator>(int& nombre);
        void afficher(std::ostream &flux) const;
        friend std:: ostream &operator<<(std::ostream &flux, CList const& list);
};

#endif 