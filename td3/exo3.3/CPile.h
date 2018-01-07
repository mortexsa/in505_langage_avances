//
// Created by mortex on 10/11/17.
//

#ifndef EXO3_3_CPILE_H
#define EXO3_3_CPILE_H

#include <cstdio>
#include "CList.h"

template <class T>
class CPile : public CList<T>{

public:

    CPile(){
        this->my_type = "CPile";
    }

    ~CPile(){}

    CList<T> & operator>(T& variable){
        if (this->content == NULL) {
            std::cout << "Pile vide" << std::endl;
            exit(1);
        }
        else {
            variable = this->content->value;
            this->content = this->content->next;
            return *this;
        }
    }

};

#endif //EXO3_3_CPILE_H
