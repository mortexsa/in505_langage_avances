#include "Vecteur.h"
using namespace std;
int Vecteur::m_nbrVecteur = 0;
Vecteur::Vecteur()
{
    m_size = 1;
    m_intTable = new int[1];
    m_intTable[0] = 0;
    m_nbrVecteur++;
}
Vecteur::Vecteur(int nbrEntier)
{
    int i = 0;
    m_size = nbrEntier;
    m_intTable = new int[m_size];
    while(i<m_size)
    {
        m_intTable[i] = 0;
        i++;
    }
    m_nbrVecteur++;
}
Vecteur::Vecteur(Vecteur& vecteur)
{
    int i=0;
    m_size = vecteur.m_size;
    m_intTable = new int[vecteur.m_size];
    while(i<m_size)
    {
        m_intTable[i] = vecteur.m_intTable[i];
        i++;
    }
    m_nbrVecteur++;
}
Vecteur::~Vecteur()
{
    delete[] m_intTable;
    m_nbrVecteur--;
}
int Vecteur::nbrVecteur()
{
    return m_nbrVecteur;
}
void Vecteur::afficher(ostream &flux) const
{
    int i=0;
	if(m_size > 1){
        flux <<"[";
        while(i<m_size)
        {
            flux <<"{"<<i+1<<":"<< m_intTable[i]<<"}";
            i++;
        }
        flux <<"]";
    }
	else{
		flux <<"Case 1: "<< m_intTable[0];
	}
}
ostream &operator<<(ostream &flux, Vecteur const& vecteur)
{
    vecteur.afficher(flux);
    return flux;
}