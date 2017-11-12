#ifndef CPILE_H
#define CPILE_H

#include <iostream>
#include "CList.h"

class CPile:public CList{
    public:
        CPile();
        ~CPile();
        CPile& operator<(int nombre);
};

#endif