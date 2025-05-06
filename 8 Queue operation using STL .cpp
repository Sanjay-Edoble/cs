#include <iostream>
#include <queue>

int main() {
    // Create a queue
    std::queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Print the size of the queue
    std::cout << "Queue size: " << q.size() << std::endl;

    // Peek the front element
    std::cout << "Front element: " << q.front() << std::endl;

    // Dequeue an element
    q.pop();

    // Print the size of the queue
    std::cout << "Queue size after dequeue: " << q.size() << std::endl;

    // Check if the queue is empty
    if (q.empty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue is not empty" << std::endl;
    }

    // Print the remaining elements
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }

    std::cout << std::endl;

    return 0;
}
