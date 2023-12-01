//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Library library;
    
    //ask for commands and execute
  
    string command;
    string book;

    bool add;
    
    
    cout<<"Enter command: ";
    cin>>command;

    if (command == "q")
      {
	return 0;
      }
    
    while (command != "q")
      {
       if (command == "a")
	 {
	   cin>>book;
           bool a = library.addBook(book);
	   if (a == false)
	     {
	       cout<<"Cannot add the book."<<endl;
	     }
	 }
       if (command == "r")
	 {
	   cin>>book;
           bool r = library.removeBook(book);
	   if (r == false)
	     {
	       cout<<"Cannot remove the book."<<endl;
	     }
	 }
       if (command == "p")
	 {
	   cout<<"Library contents: "<<endl;
	   library.print();
	 }
       cout<<"Enter command: ";
       cin>>command;
	}
}