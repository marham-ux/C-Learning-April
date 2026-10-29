
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int isbn;

public:
    Book(string t, string a, int I)
    {
        title = t;
        author = a;
        isbn = I;
    }

    void borrowBook()
    {
    }

    void returnBook()
    {
    }
};

int main()
{
    Book b1("C++ ", "arham", 12345);

    b1.borrowBook();
    b1.returnBook();

    return 0;
}
