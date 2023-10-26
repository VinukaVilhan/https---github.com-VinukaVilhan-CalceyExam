#include "header.h"
#pragma once
class book
{
    public:
    
        book(string nameOfBook, string authorOfBook);

        //getter
        string getBook();

        //setter
        void setBook(string nameOfBook, string authorOfBook);

        //method
        virtual void printDescription();

    protected:
        string title;
        string authorName;

};