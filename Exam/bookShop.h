#include "header.h"
#pragma once
class bookshop
{
    public:
        int noOfBooksAdded;
        string addBook();

        //constructor
        bookshop(int noOfBooksAdded);

    //destructor
    ~bookshop(){}
};