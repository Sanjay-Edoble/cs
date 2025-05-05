#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector<int> vec = {64, 34, 25, 12, 22, 11, 90};


    std::cout << "Original vector: ";
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;


    std::sort(vec.begin(), vec.end());

    // Print the sorted vector
    std::cout << "Sorted vector: ";
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;


    int target = 22;
    auto it = std::find(vec.begin(), vec.end(), target);

  
    if (it != vec.end()) {
        std::cout << "Element " << target << " found at index " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Element " << target << " not found" << std::endl;
    }


    if (std::binary_search(vec.begin(), vec.end(), target)) {
        std::cout << "Element " << target << " found using binary search" << std::endl;
    } else {
        std::cout << "Element " << target << " not found using binary search" << std::endl;
    }

    auto lower = std::lower_bound(vec.begin(), vec.end(), target);
    auto upper = std::upper_bound(vec.begin(), vec.end(), target);

    std::cout << "Lower bound of " << target << ": " << std::distance(vec.begin(), lower) << std::endl;
    std::cout << "Upper bound of " << target << ": " << std::distance(vec.begin(), upper) << std::endl;

    return 0;
}

