#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> fibo(n+1);
    fibo[0] = 0;
    fibo[1] = 1;

    for (int j = 2; j < n + 1; ++j)
        fibo[j] = fibo[j-1] + fibo[j-2];

    cout << fibo.at(n) << endl;

    return 0;
}