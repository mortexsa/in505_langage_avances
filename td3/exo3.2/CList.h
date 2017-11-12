#ifndef CLIST_H
#define CLIST_H

#include <iostream>
#include <string.h>
#include <stdlib.h>

typedef struct Element
{
    int value;
    struct Element *next;
} Element;

class CList{
    protected:
        std::string my_type;
        Element* content;
    public:
        CList();
        ~CList();
        CList& operator<(int entier);
        virtual CList& operator>(int& entier);
        int& operator[](int entier);
        friend std::ostream& operator<<(std::ostream& flux, const CList& list);        
};

#endif