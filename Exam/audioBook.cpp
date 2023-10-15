
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
    audioBook(string title, string author): book(nameOfBook, authorOfBook)
    {
    }

    void audioBook :: printDescription()
    {
        cout<<"The title of the audio book is "<<book::title<<" and it's voiced by "<<voiceActor<<endl
    }


