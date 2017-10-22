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
	if(m_size >= 1){
        flux <<"[";
        while(i<m_size)
        {
            flux <<"{"<<i+1<<":"<< m_intTable[i]<<"}";
            i++;
        }
        flux <<"]";
    }
}
ostream &operator<<(ostream &flux, Vecteur const& vecteur)
{
    vecteur.afficher(flux);
    return flux;
}
void Vecteur::operator+=(int const unEntier){
    int i=0;
    int *provisoir = m_intTable;
    delete[] m_intTable;
    m_intTable = new int[m_size+1];
    while(i<m_size)
    {
        m_intTable[i] = provisoir[i];
        i++;
    }
    m_intTable[m_size++] = unEntier;
}
Vecteur operator+(Vecteur vecteur1, int unEntier)
{
    Vecteur copie(vecteur1);
    copie += unEntier;
    return copie;
}
Vecteur& Vecteur::operator=(const Vecteur& v){
    if(this != &v)
    {
        delete[] m_intTable;
        m_size = v.m_size;
        m_intTable = new int[m_size];
        for(int i=0;i<m_size;i++)
        {
            m_intTable[i] = v.m_intTable[i];
        }
    }
    return  *this;
}
int& Vecteur::operator[](int position) const{
    if( position<0 or position >= m_size)    throw out_of_range("l'indice n'ai pas contenu dans le Vecteur");
    return this->m_intTable[position]; 
}
