#include <iostream>
using namespace std;
class Employee {
    int id;
    char name[30];
public:
    void getdata();
    void putdata();
};
void Employee::getdata() {
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;
}

void Employee::putdata() {
    cout << "ID: " << id << ", Name: " << name << endl;
}
int main() {
    Employee emp[30];
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Employee " << i + 1 << " details:\n";
        emp[i].getdata();
    }
    cout << "\nEmployee Data:\n";
    for (int i = 0; i < n; ++i) {
        emp[i].putdata();
    }
    return 0;
}
