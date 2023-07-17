#include <string>
#include <iostream>
class Book{

public:
    std::string title;
    std::string author;
    int pages;
    Book(){
        title = "no title";
        author = "no author";
        pages = 0;
    }
    Book(std::string aTitle, std::string aAuthor, int aPages){
        this->title = aTitle;
        this->author = aAuthor;
        this->pages = aPages;
    }
    Book(const Book &obj){
        std::cout << "Copy constructor called" << std::endl;
        this->title = obj.title;
        this->author = obj.author;
        this->pages = obj.pages;
    }
    void printInfo(){
        std::cout << "Title: " << this->title << std::endl;
        std::cout << "Author: " << this->author << std::endl;
        std::cout << "Pages: " << this->pages << std::endl;
    }

};

int main ()
{
   
    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the Rings", "Tolkien", 700);
    
    book1 = book2;
    book1.printInfo();
    book2.printInfo();
    std::cout << "------------------------" << std::endl;
    book1.title = "The Hobbit";
    book1.printInfo();
    book2.printInfo();


    return 0;
}