/*
* Find the greatest common divisor of two integers;
*/

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;

    a %= b;

    return gcd(b, a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << std::endl;
    return 0;
}
