#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;
public:
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Overloading the + operator for concatenation
    MyString operator+(const MyString& s) const {
        char* temp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp, str);
        strcat(temp, s.str);
        MyString result(temp);
        delete[] temp;
        return result;
    }

    // Display function
    void display() const {
        cout << str << endl;
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("world!");

    MyString result = str1 + str2; // Concatenating strings

    cout << "Concatenated string: ";
    result.display();

    return 0;
}
