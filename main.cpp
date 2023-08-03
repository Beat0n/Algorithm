#include <iostream>
#include "Sort.h"

void printVector(std::vector<int> nums) {
    for (int num : nums) {
        std::cout << num << std::endl;
    }
}

int main() {
    std::vector<int> nums{5,6,2,3,8,6,1,12,54,16,2348,165};

    insertionSort(nums);
    printVector(nums);

    std::cout << std::endl;
    nums = {5,6,2,3,8,6,1,12,54,16,2348,165};
    selectionSort(nums);
    printVector(nums);

    std::cout << std::endl;
    nums = {5,6,2,3,8,6,1,12,54,16,2348,165};
    mergeSort(nums, 0, nums.size() - 1);
    printVector(nums);

    std::cout << std::endl;
    nums = {5,6,2,3,8,6,1,12,54,16,2348,165};
    bubbleSort(nums);
    printVector(nums);
    return 0;
}
