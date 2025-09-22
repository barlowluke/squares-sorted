//squares.cpp

#include "squares.hpp"

#include <algorithm> //you may use std::copy(a1, a1+n, a1_copy); to copy array elements from a1 a1_copy (optional)

#include <cstdlib>  // if you want to compute std::abs (optional)

// must be of O(n)
void sorted_squares(int *nums, int n){
// ToDo
}

// compares two array if both have same elements
bool equal_arr(const int* a, const int* b, int n) {
// ToDo
}

// Complexity O(n log n)
void square_then_sort(int* nums, int n) {
    for (int i{0}; i<n; i++) 
        nums[i] = nums[i] * nums[i];
    std::sort(nums, nums + n);
}
