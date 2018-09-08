#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {

        if (b == 0) {
            if (c == 0) {
                cout << c << endl;
            }
        } else {
            cout << (-1 * c) / b << endl;
        }
    } else {
        double d = (b * b) - (4 * a * c);

        if (d == 0) {
            cout << (-1 * b) / (2 * a) << endl;

        } else if (d > 0) {
            double x1, x2;
            x1 = (b * (-1) + sqrt(b * b - 4 * a * c)) / (2 * a);
            x2 = (b * (-1) - sqrt(b * b - 4 * a * c)) / (2 * a);

            cout << x1 << " " << x2 << endl;

        }
    }

    return 0;
}
