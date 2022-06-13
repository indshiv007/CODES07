#include <iostream>
using namespace std;

int main() {
    int min_coin = 0;
    int value;
    cin >> value;
    int change_num[3] = {0, 0, 0};
    change_num[0] = value / 10;
    change_num[1] = value % 10 / 5;
    change_num[2] = value % 10 % 5;
    min_coin = change_num[0] + change_num[1] + change_num[2];
    cout << min_coin << endl;
    return 0;
}