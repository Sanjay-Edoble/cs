#include <iostream>
using namespace std;


bool searchNumber(int arr[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return true; 
        }
    }
    return false; 
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
   
    if (searchNumber(arr, n, num)) {
        cout << "Number " << num << " found in the array." << endl;
    } else {
        cout << "Number " << num << " not found in the array." << endl;
    }
    return 0;
}
