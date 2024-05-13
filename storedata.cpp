#include <iostream>
#include <string>
#include <vector> // Use vector for dynamic memory allocation

using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;

public:
    // Constructor to initialize employee data
    Employee(int empId, const string& empName, double empSalary) :
        id(empId), name(empName), salary(empSalary) {}

    // Function to get employee details from user
    void getDetails() {
        cout << "Enter employee ID: ";
        cin >> id;

        cout << "Enter employee name: ";
        getline(cin >> ws, name); // Handle spaces in name

        cout << "Enter employee salary: ";
        cin >> salary;
    }

    // Function to display employee details
    void displayDetails() const {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    vector<Employee> employees; // Use a vector for dynamic memory allocation

    char choice;

    do {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Delete Employee by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                Employee newEmployee;
                newEmployee.getDetails();
                employees.push_back(newEmployee); // Add employee to vector
                cout << "Employee added successfully!" << endl;
                break;
            }
            case '2':
                if (employees.empty()) {
                    cout << "No employees found!" << endl;
                } else {
                    cout << "\nEmployee Details:\n";
                    for (const Employee& employee : employees) {
                        employee.displayDetails();
                        cout << endl;
                    }
                }
                break;
            case '3': {
                int searchId;
                cout << "Enter employee ID to search: ";
                cin >> searchId;

                bool found = false;
                for (const Employee& employee : employees) {
                    if (employee.id == searchId) {
                        employee.displayDetails();
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Employee with ID " << searchId << " not found." << endl;
                }
                break;
            }
            case '4': {
                int deleteId;
                cout << "Enter employee ID to delete: ";
                cin >> deleteId;

                vector<Employee>::iterator it = employees.begin();
                while (it != employees.end()) {
                    if (it->id == deleteId) {
                        employees.erase(it); // Efficiently remove employee
                        cout << "Employee deleted successfully!" << endl;
                        break;
                    }
                    ++it;
                }

                if (it == employees.end()) {
                    cout << "Employee with ID " << deleteId << " not found." << endl;
                }
                break;
            }
            case '5':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != '5');

    return 0;
}
