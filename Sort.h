//
// Created by Hu Jizhe on 3/8/2023.
//

#ifndef ALGORITHM_SORT_H
#define ALGORITHM_SORT_H
#include <vector>

// O(n*n)
std::vector<int> insertionSort(std::vector<int>& nums) {
    for (int i=1;i<nums.size();i++) {
        if (nums[i] >= nums[i-1]) continue;
        for (int j=i;j>=0;j--) {
            if (nums[j] < nums[j-1]) {
                int tmp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = tmp;
            } else {
                break;
            }
        }
    }
    return nums;
}

// O(n*n)
std::vector<int> selectionSort(std::vector<int>& nums) {
    for (int i=0; i<nums.size(); i++) {
        int min_index = i;
        for (int j=i+1; j<nums.size(); j++) {
            if (nums[j] < nums[min_index]) {
                min_index = j;
            }
        }
        int tmp = nums[i];
        nums[i] = nums[min_index];
        nums[min_index] = tmp;
    }
    return nums;
}
#endif //ALGORITHM_SORT_H
