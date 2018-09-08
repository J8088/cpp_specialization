/*
* Calculate the purchase price with discount;
* If the purchase amount is more than A rubles, then the X% discount is given;
* If the purchase amount is more than B rubles, then the Y% discount is given;
* Input: five real numbers separated by a space: N, A, B, X, Y (A < B), N is the initial price of the purchase;
* Output: price with discount;
*/

#include <iostream>

using namespace std;

int main() {
    double n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;

    double d = 0.0;
    double p = 0.0;

    if (n > b) {
        p = y;
    } else if (n > a) {
        p = x;
    }
    d = (n * p) / 100;
    n -= d;
    cout << n << endl;

    return 0;
}
