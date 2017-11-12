#ifndef CFILE_H
#define CFILE_H

#include <stdio.h>
#include "CList.h"

class CFile : public CList {
    public:
        CFile();
        ~CFile();
        CList& operator>(int& entier);
};

#endif 