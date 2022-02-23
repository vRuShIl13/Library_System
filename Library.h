
#include "bookEntry.h"
#define MAX 100

class Library {

public:
    int numBooks;
    bookEntry database[MAX];

    //constructor
    Library();
    Library(int);

    void insertBook(char bN[],char aN[], int c);
    void deleteBook(char bN[]);
    bookEntry* search(char bN[]);
};



