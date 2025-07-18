#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {10, 3, 15, 7, 8, 23, 74, 18};
    int k = 5;

    std::partial_sort(v.begin(), v.begin() + k, v.end());

    for (int i = 0; i < k; ++i) std::cout << v[i] << " ";
}