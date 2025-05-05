#include <iostream>
#include <cstring>
using namespace std;

// Base class
class Person {
protected:
    char name[30];
public:
    void getName() {
        cout << "Enter Name: ";
        cin >> name;
    }

    void putName() const {
        cout << "Name: " << name;
    }
};

// Intermediate class from Person
class Employee : public Person {
protected:
    int id;
public:
    void getEmployeeData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        getName();
    }

    void putEmployeeData() const {
        cout << "ID: " << id << ", ";
        putName();
    }
};

// Another base class
class Department {
protected:
    char deptName[30];
public:
    void getDeptData() {
        cout << "Enter Department Name: ";
        cin >> deptName;
    }

    void putDeptData() const {
        cout << ", Department: " << deptName;
    }
};

// Derived from both Employee and Department
class Manager : public Employee, public Department {
    char role[30];
public:
    void getData() {
        getEmployeeData();
        getDeptData();
        cout << "Enter Role: ";
        cin >> role;
    }

    void putData() const {
        putEmployeeData();
        putDeptData();
        cout << ", Role: " << role << endl;
    }
};

int main() {
    Manager mgr[30];
    int n;
    cout << "Enter number of managers: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "\nManager " << i + 1 << " Details:\n";
        mgr[i].getData();
    }

    cout << "\nManager Information:\n";
    for (int i = 0; i < n; ++i) {
        mgr[i].putData();
    }

    return 0;
}
