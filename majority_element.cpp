#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
    int count = 0;
    int mid = (left + right) / 2;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == a[mid])
            count++;
    }
    if (count > mid)
        return 1;
    return 0;
}

int main() {
    int n;
    std::cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < a.size(); ++i) {
        std::cin >> a[i];
    }
    sort(a.begin(), a.end());
    std::cout << get_majority_element(a, 0, a.size()) << std::endl;
    return 0;
}