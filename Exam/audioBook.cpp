
#include "audioBook.h"        
        
    //getter
    string audioBook:: getActor()
    {
        return voiceActor;
    }

    //setter
    void audioBook :: setActor(string voiceActorName)
    {
        voiceActor = voiceActorName;
    }

    //constructor
    audioBook::audioBook(string voiceActor) : book(title, authorName), voiceActor(voiceActor) 
    {
    }


    void audioBook::printDescription() 
    {
        cout << "The title of the audio book is " << book::title << " and it's voiced by " << audioBook::voiceActor << endl;
    }


