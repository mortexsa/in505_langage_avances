//
// Created by mortex on 10/11/17.
//

#ifndef EXO3_3_CLIST_H
#define EXO3_3_CLIST_H


#include <iostream>
#include <string.h>
#include <stdlib.h>


template <typename T>
struct Element
{
    T value;
    Element *next;
};

template <class T>
class CList{
    protected:
        std::string my_type;
        Element<T> * content;
    public:
        CList() {
            my_type = "CList";
            content = NULL;
        }
        ~CList() {
            if (content != NULL) {
                while (content->next != NULL) {
                    Element<T>* tmp = content;
                    content = content->next;
                    delete tmp;
                }
                delete content;
                content = NULL;
            }
        }
        CList& operator<(T entier) {
            Element<T>* tmp = new Element<T>;
            tmp->value = entier;
            if (content == NULL) {
                content = tmp;
                tmp->next = NULL;
            }
            else {
                tmp->next = content;
                content = tmp;
            }
            return *this;
        }
        virtual CList& operator>(T& entier) {
            std::cout << " je ne dispose pas de la faculter de suprimer des element d'une liste." << std::endl;
            return *this;
        }
        T& operator[](T entier){
            Element<T>* tmp = content;
            int compteur = 1;
            while (tmp != NULL && compteur < entier) {
                tmp = tmp->next;
                compteur++;
            }
            if (tmp == NULL) {
                std::cout << "index of range" << std::endl;
                exit(1);
            }
            else return tmp->value;
        }
        friend std::ostream & operator<<(std::ostream& flux, const CList<T> & list){
            flux << "Voici une liste de type " << list.my_type << ":";
            if (list.content == NULL) flux << "liste vide" << std::endl;
            else {
                Element<T>* tmp = list.content;
                while (tmp != NULL) {
                    flux << " " << tmp->value;
                    tmp = tmp->next;
                }
                flux << std::endl;
            }
            return flux;
        }
};



#endif //EXO3_3_CLIST_H
