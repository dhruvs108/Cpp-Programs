#include <iostream>
using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages)
        {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        };
};

int main()
{
    cout << "Introduction to Classes and Objects, i.e; Object-Oriented Programming and Constructor Functions!\n\n";
    Book book1 = {"Harry Potter", "JK Rowling", 500};
    book1.title = "GoT";
    Book book2("Fantastic Beasts", "JK Rowling", 700);
    cout << "Title: " << book2.title << endl << "Author: " << book2.author << endl << "Pages: " << book2.pages << "\n\n";
    cout << "Title: " << book1.title << endl << "Author: " << book1.author << endl << "Pages: " << book1.pages << "\n\n";
//    book2.title = "Lord of the Rings";
//    book2.author = "Tolkein";
//    book2.pages = 550;
//    cout << "Title: " <<book2.title << endl << "Author: " << book2.author << endl << "Pages: " << book2.pages << endl;
    return 0;
}
