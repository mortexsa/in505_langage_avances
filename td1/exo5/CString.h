#ifndef DEF_CSTRING
#define DEF_CSTRING

#include <iostream>
#include <string.h>

class CString
{
	public:
		CString();
		CString(char lettre);
		CString(char *mot);
		~CString();
		void afficher();
		static int nbrChaines();
		void plus(char lettre);
		char* getString();
	private:
		static int nbMot;
		char *m_mot;
};

#endif