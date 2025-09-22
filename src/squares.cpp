#include "squares.hpp"
#include <algorithm> //you may use std::copy(a1, a1+n, a1_copy); to copy array elements from a1 a1_copy (optional)
#include <cstdlib>  // if you want to compute std::abs (optional)

// must be of O(n)
void sorted_squares(int *nums, int n){
    if (n == 0) {
        return;
    }
    int left = 0;
    int right = n - 1;
    // index to write to result array from back to front
    int idx = n - 1;
    int size = n;
    int nums_copy[size];
    // copy given array to result array
    std::copy(nums, nums + n, nums_copy);
    while (left <= right) {
        int val_left = nums[left];
        int val_right = nums[right];
        if (std::abs(val_left) > std::abs(val_right)) {
            nums_copy[idx] = nums[left] * nums[left];
            left++;
        } else {
            nums_copy[idx] = nums[right] * nums[right];
            right--;
        }
        idx--;
    }
    // copy back results array to given array
    std::copy(nums_copy, nums_copy + n, nums);
}

// compares two array if both have same elements
bool equal_arr(const int* a, const int* b, int n) {
    for (int i{0}; i < n; i++) {
        if (*a != *b) {
            return false;
        }
    }
    return true;
}

// Complexity O(n log n)
void square_then_sort(int* nums, int n) {
    for (int i{0}; i<n; i++) 
        nums[i] = nums[i] * nums[i];
    std::sort(nums, nums + n);
}
