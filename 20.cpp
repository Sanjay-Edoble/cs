#include <iostream>
using namespace std;

// Function Template for Sorting
template <typename T>
void sortArray(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, choice;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Choose data type:\n1. Integer\n2. Float\n3. Double\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        int arr[n];
        cout << "Enter " << n << " integers: ";
        for (int i = 0; i < n; i++) cin >> arr[i];

        sortArray(arr, n);

        cout << "Sorted Integers: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
    }
    else if (choice == 2) {
        float arr[n];
        cout << "Enter " << n << " floats: ";
        for (int i = 0; i < n; i++) cin >> arr[i];

        sortArray(arr, n);

        cout << "Sorted Floats: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
    }
    else if (choice == 3) {
        double arr[n];
        cout << "Enter " << n << " doubles: ";
        for (int i = 0; i < n; i++) cin >> arr[i];

        sortArray(arr, n);

        cout << "Sorted Doubles: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}
