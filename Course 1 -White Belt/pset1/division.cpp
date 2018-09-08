/*
* Given two natural numbers A and B, find the integer part of their quotient; 
* Both numbers are less than 1 000 000;
* If B = 0 return "Impossible";
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "Impossible";
    } else {
        cout << a / b;
    }

    cout << endl;

    return 0;
}
