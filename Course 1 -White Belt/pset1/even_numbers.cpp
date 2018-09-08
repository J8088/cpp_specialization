/*
* Given two integers A and B (A <= B, A >= 1, B <= 30000) return all even numbers from A to B inclusive separated by a space;
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
