#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float salary;
public:
    void setData(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    const int numEmployees = 3;
    Employee employees[numEmployees];

    // Setting data for each employee
    employees[0].setData("John Doe", 1001, 50000);
    employees[1].setData("Jane Smith", 1002, 60000);
    employees[2].setData("Alice Johnson", 1003, 55000);

    // Displaying data of all employees
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i+1 << ":" << endl;
        employees[i].displayData();
        cout << endl;
    }

    return 0;
}
