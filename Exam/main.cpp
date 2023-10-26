#include "header.h"
#include "book.h"
#include "audioBook.h"

int main() {
    book book1("From third world to first", "Lee Kwan Yew");
    book1.getBook();
    book1.printDescription();

    audioBook audio1("Lester James");
    audio1.getActor();
    audio1.printDescription();

    return 0;
}