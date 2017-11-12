//
// Created by mortex on 10/11/17.
//

#ifndef EXO3_3_CFILE_H
#define EXO3_3_CFILE_H


#include <stdio.h>
#include "CList.h"
template <class T>
class CFile : public CList<T> {
public:
    CFile(){
        this->my_type = "CFile";
    }
    ~CFile(){}
    CList<T>& operator>(T& entier){
        if (this->content == NULL) {
            std::cout << "File vide" << std::endl;
            exit(1);
        }
        else {
            Element<T>* tmp = this->content->next;
            if (tmp == NULL) {
                entier = this->content->value;
                this->content = NULL;
                delete tmp;
                return *this;
            }
            else {
                Element<T>* aux = tmp;
                while (tmp->next != NULL) {
                    aux = tmp;
                    tmp = tmp->next;
                }
                entier = tmp->value;
                aux->next = NULL;
                return *this;
            }
        }
    }
};


#endif //EXO3_3_CFILE_H
