#include "header.h"
#include "book.h"
#include "audioBook.cpp"

int main()
{
    book book1;
    book1.setBook("From third world to first", "Lee kwan yew");
    book1.getBook();
    book1.printDescription();

    audioBook audio1;
    audio1.setBook("Lester James");
    audio1.getbook();
    audio1.printDescription();


    //array
    int noOfBooksAdded = 0;
    int size = 5;
    string title;
    bookshop* bookCollection = <static_cast>(malloc (size*(sizeof(bookshop))))

    for(int x = 0, x < size, x++)
    {

    } 

    return 0;
}