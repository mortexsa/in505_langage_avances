#ifndef CPILE_H
#define CPILE_H

#include <stdio.h>
#include "CList.h"

class CPile : public CList {
    public:
        CPile();
        ~CPile();
        CList& operator>(int& entier);
};

#endif 