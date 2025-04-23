#include <iostream>

class Number {
private:
    int value;

public:
    Number() : value(0) {}

    Number(int val) : value(val) {}

    Number operator+(const Number& other) {
        Number result;
        result.value = this->value + other.value;
        return result;
    }

    friend Number operator-(const Number& num1, const Number& num2);

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};


Number operator-(const Number& num1, const Number& num2) {
    Number result;
    result.value = num1.value - num2.value;
    return result;
}
int main() {
    Number num1(10);
    Number num2(5);
    Number sum = num1 + num2; 
    Number difference = num1 - num2; 
    std::cout << "Result of addition:" << std::endl;
    sum.display();
    std::cout << "Result of subtraction:" << std::endl;
    difference.display();
    return 0;
}
