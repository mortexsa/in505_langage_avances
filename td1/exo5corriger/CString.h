#ifndef DEF_CSTRING
#define DEF_CSTRING

#include <iostream>
#include <string.h>

class CString
{
private:
	int m_size;
	char *m_mot;
	static int m_nbrChaines;
public:
	CString();
	CString(char c);
	CString(char* mot);
	CString(CString& S);
	~CString();
	static int nbrChaines();
	void afficher();
};

#endif