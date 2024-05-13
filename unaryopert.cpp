#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    // Constructor
    Counter() : count(0) {}

    // Prefix increment operator overloading (++count)
    Counter& operator++() {
        count++;
        return *this;
    }

    // Postfix increment operator overloading (count++)
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    // Display count
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1, c2;

    // Prefix increment
    cout << "Prefix increment:" << endl;
    ++c1;
    c1.display();

    // Postfix increment
    cout << "Postfix increment:" << endl;
    c2++;
    c2.display();

    return 0;
}
