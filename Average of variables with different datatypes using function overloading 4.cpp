#include <iostream>
using namespace std;

// Overloaded function for int
float average(int a, int b) {
    return (a + b) / 2.0f;
}

// Overloaded function for float
float average(float a, float b) {
    return (a + b) / 2.0f;
}

// Overloaded function for double
double average(double a, double b) {
    return (a + b) / 2.0;
}

// Overloaded function for mixed types
double average(int a, double b) {
    return (a + b) / 2.0;
}

int main() {
    cout << "Average (int): " << average(10, 20) << endl;
    cout << "Average (float): " << average(10.5f, 20.5f) << endl;
    cout << "Average (double): " << average(10.5, 20.5) << endl;
    cout << "Average (int, double): " << average(10, 20.5) << endl;

    return 0;
}
