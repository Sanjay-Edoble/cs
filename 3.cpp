#include <iostream>
using namespace std;


void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping by value:" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
}


void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Before swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    int temp1 = num1, temp2 = num2;
    swapByValue(temp1, temp2);

    swapByReference(&num1, &num2);
    cout << "After swapping by reference (using pointers):" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    swapByReference(num1, num2);
    cout << "After swapping by reference (using reference variables):" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
