#include "book.h"

        string book::getBook()
        {
            return title;
           
        }
        //setter
        void book:: setBook(string nameOfBook,  string authorOfBook)
        {   
            title = nameOfBook;
            authorName = authorOfBook;
        }
        
        
        book::book(string nameOfBook, string authorOfBook)
        {
            title = nameOfBook;
            authorName = authorOfBook;
        }


        //method
        void book:: printDescription()
        {
            cout<<"The title of the book is "<<title<<" and it's written by "<<authorName<<endl;
        }