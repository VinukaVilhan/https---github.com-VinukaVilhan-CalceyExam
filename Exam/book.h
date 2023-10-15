#include "header.h"
class book
{
    public:
    
        book(string nameOfBook, string authorOfBook);

        //getter
        string getBook();

        //setter
        void setBook(string nameOfBook, string authorOfBook);

        //method
        void virtual printDescription();

    private:
        string title;
        string authorName;

};