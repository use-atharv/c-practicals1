#include <iostream>
#include <string>

class Book {
private:
  std::string title;
  std::string author;

public:
  // Default constructor (no arguments)
  Book() {
    std::cout << "Book object created (default constructor)" << std::endl;
  }

  // Constructor with arguments
  Book(const std::string& title, const std::string& author) : title(title), author(author) {
    std::cout << "Book object created with title: \"" << title << "\" and author: \"" << author << "\"" << std::endl;
  }

  // Destructor
  ~Book() {
    std::cout << "Book object destroyed (destructor)" << std::endl;
  }

  // Function to display book information
  void displayInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
  }
};

int main() {
  // Create a Book object using the default constructor
  Book book1;
  book1.displayInfo(); // Output: Book object created (default constructor)

  // Create a Book object with arguments using the constructor
  Book book2("The Hitchhiker's Guide to the Galaxy", "Douglas Adams");
  book2.displayInfo(); // Output: Book object created with title: "The Hitchhiker's Guide to the Galaxy" and author: "Douglas Adams"

  // Book objects will be destroyed when they go out of scope (destructor called)
  return 0;
}
