#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>

using namespace std;

int binary_search(const vector<int> &a, int x) {
    int left = 0, right = (int) a.size();
    while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == x)
            return mid;

        else if (a[mid] > x)
            right = mid - 1;

        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < m; ++i) {
        cout << binary_search(a, b[i]) << " ";

    }
    return 0;
}