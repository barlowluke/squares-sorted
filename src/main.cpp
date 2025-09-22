#include "squares.hpp"
#include <cassert>
#include <iostream>
#include <algorithm>

int main() {
    int a1[]{-5, -3, -1, 3, 5};
    int n = std::size(a1);
    int a1_copy[n];
    std::copy(a1, a1+n, a1_copy);

    sorted_squares(a1, n);

    square_then_sort(a1_copy, n);
    for (int num : a1_copy) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    assert(equal_arr(a1, a1_copy, n));

    for(auto const &elt : a1)
        std::cout << elt << " ";
    std::cout << "\n";
 }
 // 1 9 9 25 25
