#ifndef DEF_VECTEUR
#define DEF_VECTEUR

#include <iostream>
#include <string.h>
#include <stdexcept>
class Vecteur {
    private:
        int m_size;
        int *m_intTable;
        static int m_nbrVecteur;
    public:
        Vecteur();
        Vecteur(const int nbrEntier);
        Vecteur(const Vecteur& vecteur);
        ~Vecteur();
        int nbrVecteur();
        void afficher(std::ostream &flux) const;
        Vecteur operator+=(const Vecteur& v);
        Vecteur& operator=(const Vecteur& v);
        int& operator[](int position) const;
        friend std:: ostream &operator<<(std::ostream &flux, Vecteur const& vecteur);
        friend Vecteur operator+(const Vecteur& vecteur1, const Vecteur& vecteur2);
    };


#endif