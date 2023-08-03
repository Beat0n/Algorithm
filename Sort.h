//
// Created by Hu Jizhe on 3/8/2023.
//

#ifndef ALGORITHM_SORT_H
#define ALGORITHM_SORT_H
#include <vector>

//! insertionSort:O(n*n)
void insertionSort(std::vector<int>& nums) {
    for (int i=1;i<nums.size();i++) {
        if (nums[i] >= nums[i-1]) continue;
        for (int j=i;j>0;j--) {
            if (nums[j] < nums[j-1]) {
                int tmp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = tmp;
            } else {
                break;
            }
        }
    }
}

//! selectionSort: O(n*n)
void selectionSort(std::vector<int>& nums) {
    for (int i=0; i<nums.size()-1; i++) {
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
}

//! mergeSort: O(n*lgn)
// merge two parts of the divided vector
void merge(std::vector<int>& nums, int start, int end) {
    if (start == end) return;
    int medium = (start + end) / 2;
    std::vector<int> ans;
    int i = start;
    int j = medium + 1;
    while (i <= medium && j <= end) {
        if (nums[i] < nums[j]) {
            ans.push_back(nums[i]);
            i++;
        } else {
            ans.push_back(nums[j]);
            j++;
        }
    }
    if (i > medium) {
        for (int k = j; k<=end; k++) {
            ans.push_back(nums[k]);
        }
    } else {
        for (int k = i; k<=medium; k++) {
            ans.push_back(nums[k]);
        }
    }
    for (int k = 0; k<ans.size(); k++) {
        nums[start+k] = ans[k];
    }
}
void mergeSort(std::vector<int>& nums, int start, int end) {
    if (start == end) return;
    mergeSort(nums, start, (start + end) / 2);
    mergeSort(nums, ((start + end) / 2) + 1, end);
    merge(nums, start, end);
}

//! bubbleSort: O(n*n)
void bubbleSort(std::vector<int>& nums) {
    for (int i=0; i<nums.size()-1; i++) {
        for (int j=nums.size() - 1; j>i; j--) {
            if (nums[j] < nums[j-1]) {
                int tmp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = tmp;
            }
        }
    }
}
#endif //ALGORITHM_SORT_H
