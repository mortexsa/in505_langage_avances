#include "CString.h"
using namespace std;
int CString::nbMot = 0;
CString::CString (): m_mot(0)
{
	nbMot++;
	m_mot = new char[1];
}
CString::CString (char lettre): m_mot(0)
{
	nbMot++;
	m_mot = new char[1];
	m_mot[0] = lettre;
}
CString::CString (char *mot): m_mot(0)
{
	nbMot++;
	m_mot = new char[strlen(mot)+1];
	strcpy(m_mot,mot);
}
CString::~CString(){
	nbMot--;
	delete[] m_mot;
	cout<<"le mot a été suprimer."<<endl;
}
int CString::nbrChaines()
{
	return nbMot;
}
void CString::afficher()
{
	cout <<"Le mot est : "<<m_mot<<endl;
}
void CString::plus(char lettre)
{
	m_mot = new char[strlen(m_mot)+2];
	m_mot[strlen(m_mot)-1] = lettre;
}
char* CString::getString()
{
	return m_mot;
}