#include <iostream>
using namespace std;

unsigned long long sum_fibo(unsigned long long n) {
    
    n = (n + 2) % 60;
    auto *fis = new unsigned long long[n + 1];
    unsigned long long result = 1;
    fis[0] = 0;
    fis[1] = 1;

    for (int i = 2; i < n + 1; ++i) {
        fis[i] = (fis[i - 1] % 10 + fis[i - 2] % 10) % 10;

    }
    if (fis[n] == 0) {
        return 9;
    }
    return (fis[n] % 10 - 1);
}

int main() {
    unsigned long long n = 0;
    cin >> n;
    cout << sum_fibo(n) << '\n';
    return 0;
}