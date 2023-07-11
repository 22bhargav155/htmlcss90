#include <iostream>

using namespace std;

// Employee class definition
class Employee {
    public:
        int id;
        string name;
};

// printEmployeeDetails function
void printEmployeeDetails(Employee employee) {
    cout << "Employee ID: " << employee.id << endl;
    cout << "Employee Name: " << employee.name << endl;
}

int main() {
    // Create an employee object
    Employee employee;
    employee.id = 123;
    employee.name = "John Doe";
    
    // Print out the employee details
    printEmployeeDetails(employee);
    
    return 0;
}



































































































