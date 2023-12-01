//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>

using namespace std;

//implement class functions
Library::Library()
{
  for (int i = 0; i < 10; i++)
    {
      books[i] = " ";
    }
}
bool Library::addBook(string bookName)
{
  int size = 0;

  for (int i = 0; i < 10; i++)
    {
      if (books[i] != " ")
	{
	  size++;
	}
    }

  if (size == 10)	
    {
      return false;
    }

  for (int i = 0; i < 10; i++)
    {
      if (books[i] == bookName)
      {
	return false;
      }
      else
	{
	  books[i] = bookName;
	  return true;

	}
    }
}
bool Library::removeBook(string bookName)
{
  for (int i = 0; i < 10; i++)
    {
      if (books[i] == bookName)
	{
	//cout << "True: "<< books[i] << endl;
	  books[i] = " ";
	  return true;
	}
      else 
	{
	//cout << "False: " << books[i] << endl;
	  return false;
	}
    }
}
void Library::print()
{
  for (int i = 0; i < 10; i++)
    {
      cout<<books[i]<<endl;
    }
}