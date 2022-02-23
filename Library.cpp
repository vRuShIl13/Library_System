

#include <cstring>
#include "Library.h"
#include "iostream"

using namespace std;



Library::Library(): numBooks(0) {}


Library::Library(int n): numBooks(n) {}

void Library::insertBook(char bN[],char aN[], int c) {
    if(numBooks < MAX){
        strcpy(database[numBooks].name,bN);
        strcpy(database[numBooks].author,aN);
        database[numBooks].copies = c;
        cout<<"Book added to the Library System"<<endl;
        numBooks++;
    }
}



void Library:: deleteBook(char bN[]){
    for(int i=0; i<numBooks; i++){
        if(strcmp(database[i].name,bN) == 0){
            database[i].copies--;
            cout << "Book taken by the user " << endl;
            return;
        }
    }
    cout <<"Book not found"<< endl;
}

bookEntry *Library::search(char bN[]){
    for(int i=0; i<numBooks; i++){
        if(strcmp(database[i].name,bN) == 0){
            return &database[i];
        }
    }
    return nullptr;
}

