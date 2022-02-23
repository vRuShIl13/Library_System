#include <iostream>
#include "Library.h"

using namespace std;

int main(){
    Library lib;

    char option, name[30], author[30], copies[10];
    while( 1 ){
        cout << "\nEnter your option:\n";
        cout << "I for insert\n";
        cout << "D for delete\n";
        cout << "S for search\n";
        cout << "E for exit\n";

        cin.getline( name, 80);
        option = name[0];

        switch( option){

            case 'i':
                cout << "Enter Name of Book, Author and no of copies per line:\n";
                cin.getline( name, 80);
                cin.getline(author, 80);
                cin.getline(copies, 80);
                lib.insertBook( name, author, atoi(copies));
                break;
            case 'd':
                cout << "Enter Name of Book:\n";
                cin.getline(name, 80);
                lib.deleteBook(name);
                break;
            case 's':
                cout << "Enter Name of Book:\n";
                cin.getline(name, 80);
                bookEntry *item;
                item = lib.search( name );
                if( item != nullptr){
                    cout << "Book found\n" << item->name << endl << item->author << endl << item->copies << endl;
                }
                else
                    cout << "Book not found\n";
                break;
            case 'e':
                cout <<"Session ended"<<endl;
                cout<< "Programmed by Vrushil Patel";
                exit(0);

        }
    }
    return 0;
}
