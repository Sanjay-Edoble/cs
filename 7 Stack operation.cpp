
#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T* arr; int top, capacity;
public:
    Stack(int size) : capacity(size), top(-1) { arr = new T[capacity]; }
    ~Stack() { delete[] arr; }

    void push(T value) {
        if (top == capacity - 1) { cout << "Stack Overflow!\n"; return; }
        arr[++top] = value; cout << "Pushed: " << value << endl;
    }

    T pop() {
        return (top == -1) ? (cout << "Stack Underflow!\n", -1) : (cout << "Popped: " << arr[top] << endl, arr[top--]);
    }

    T peek() { return (top == -1) ? (cout << "Stack is empty!\n", -1) : arr[top]; }

    bool isEmpty() { return top == -1; }
};

int main() {
    Stack<int> s(5);
    s.push(10); s.push(20); s.push(30);
    cout << "Top element: " << s.peek() << endl;
    s.pop(); s.pop(); s.pop(); s.pop();
    cout << (s.isEmpty() ? "Stack is empty\n" : "Stack is not empty\n");
    return 0;
}
