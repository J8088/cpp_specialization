/*
* Given a positive integer N return its binary representation without leading zeros;
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> binary;
    int bit = 0;
    int num;
    cin >> num;

    while (num > 0) {
        bit = num % 2;
        binary.push_back(bit);
        num /= 2;
    }

    for (int i = binary.size() - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << endl;

    return 0;
}
