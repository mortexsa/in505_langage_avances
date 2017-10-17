#ifndef DEF_VECTEUR
#define DEF_VECTEUR

#include <iostream>
#include <string.h>
class Vecteur {
    private:
        int m_size;
        int *m_intTable;
        static int m_nbrVecteur;
    public:
        Vecteur();
        Vecteur(int nbrEntier);
        Vecteur(Vecteur& vecteur);
        ~Vecteur();
        int nbrVecteur();
        void afficher(std::ostream &flux) const;
};

std:: ostream &operator<<(std::ostream &flux, Vecteur const& vecteur);

#endif