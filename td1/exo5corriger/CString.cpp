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
	m_size = 1;
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
CString& CString::plus (const char c)
{
	char *table = new char[this->m_size+2];
	strcpy(table,this->m_mot);
	table[this->m_size] = c;
	table[this->m_size+1] = '\0';
	delete[] this->m_mot;
	this->m_mot = table;
	this->m_size++;
	return *this;
}
char* CString::getString()
{
	return this->m_mot;
}
bool CString::plusGrandQue(CString &S)
{
	int i=0, size = 0;
	
	if(this->m_size < S.m_size) size = this->m_size;
	else size = S.m_size;

	while(i<size)
	{
		if(this->m_mot[i] > S.m_mot[i]) return true;
		if(this->m_mot[i] < S.m_mot[i]) return false;
		i++;
	}
	return false;
}
bool CString::infOuEgale(CString &S)
{
	if(this->plusGrandQue(S)) return false;
	else return true;
}
CString& CString::plusGrand(CString& S)
{
	if(this->infOuEgale(S))
	{
		return S;
	} 
	return *this;
}
CString& CString::operator=(CString& S)
{
	delete[] this->m_mot;
	this->m_mot = new char[strlen(S.getString())+1];
	strcpy(this->m_mot,S.getString());
	this->m_size = strlen(S.getString())+1;
	return *this;
}

