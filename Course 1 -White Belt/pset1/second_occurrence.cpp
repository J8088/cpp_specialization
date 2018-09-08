/*
* Given a string find the second occurrence of letter "f" and return its index;
* If "f" is found only once return -1;
* If "f" is not found return -2;
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    int position = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            count++;
        }
        if (count == 2) {
            position = i;
            break;
        }
    }

    if (count == 0) {
        cout << -2 << endl;
    } else if (count == 1) {
        cout << -1 << endl;
    } else if (count == 2) {
        cout << position << endl;
    }

    return 0;
}
