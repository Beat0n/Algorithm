//
// Created by Hu Jizhe on 3/8/2023.
//

#ifndef ALGORITHM_SORT_H
#define ALGORITHM_SORT_H
#include <vector>

std::vector<int> insertionSort(std::vector<int>& nums) {
    for (int i=1;i<nums.size();i++) {
        if (nums[i] >= nums[i-1]) continue;
        int j;
        for (j=i-1;j>=0;j--) {
            if (nums[i] < nums[j]) break;
        }
        int tmp = nums[i];
        for (int k=i;k>j;k--) {
            nums[k] = nums[k-1];
        }
        nums[j] = tmp;
    }
    return nums;
}
#endif //ALGORITHM_SORT_H
