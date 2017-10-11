#include "CString.h"
using namespace std;

int CString::m_nbrChaines = 0;

CString::CString()
{
	this->m_size = 0;
	this->m_mot = new char[1];
	m_mot[0] = '\0';
	m_nbrChaines++;
}
CString::CString(char c)
{
	m_mot = new char[2];
	m_mot[0] = c;
	m_mot[1] = '\0';
	m_nbrChaines++;
}
CString::CString(char *mot)
{
	this->m_size = strlen(mot);
	this->m_mot = new char[this->m_size + 1];
	strcpy(m_mot,mot);
	m_nbrChaines++;
}
CString::CString(CString& S)
{
	this->m_size = S.m_size;
	this->m_mot = new char[S.m_size + 1];
	strcpy(m_mot,S.m_mot);
	m_nbrChaines++;
}
CString::~CString()
{
	delete[] m_mot;
	m_nbrChaines--;
}
int CString::nbrChaines()
{
	return m_nbrChaines;
}
void CString::afficher()
{
	cout <<"Le mot est : "<<m_mot<<endl;
}
