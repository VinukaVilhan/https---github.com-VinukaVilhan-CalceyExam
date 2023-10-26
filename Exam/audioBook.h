#include "header.h"
#include "book.h"
#pragma once

class audioBook : public book
{
    public:
        //getter
        string getActor();
        //setter
        void setActor(string voiceActorName);

        //method
        virtual void printDescription() override;

        //constructor
        audioBook(string voiceActor);

    private:
        string voiceActor;
};
