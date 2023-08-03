#include <iostream>
#include "Sort.h"

void printVector(std::vector<int> nums) {
    for (int num : nums) {
        std::cout << num << std::endl;
    }
}

int main() {
    std::vector<int> nums{1,3,2,4,5,6,8,7};
    printVector(insertionSort(nums));
    std::cout << std::endl;
    printVector(selectionSort(nums));
    return 0;
}
