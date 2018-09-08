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
