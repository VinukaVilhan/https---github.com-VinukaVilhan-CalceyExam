#include "header.h"
#include "book.h"


class audioBook : public book
{
    public:
        //getter
        string getActor();
        //setter
        void setActor(string voiceActorName);

        //method
        void printDescription() override;

        //constructor
        audioBook(string title, string author): book(nameOfBook, authorOfBook);

    private:
        string voiceActor;
};
