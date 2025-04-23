#include <iostream>
#include <queue>

int main() {

    std::queue<int> q;


    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Queue size: " << q.size() << std::endl;


    std::cout << "Front element: " << q.front() << std::endl;


    q.pop();

    std::cout << "Queue size after dequeue: " << q.size() << std::endl;
    if (q.empty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue is not empty" << std::endl;
    }
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }

    std::cout << std::endl;

    return 0;
}
