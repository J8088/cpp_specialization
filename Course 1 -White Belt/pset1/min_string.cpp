#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> s(3);
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }

    string min = s[0];
    for (string w: s) {
        if (w < min) {
            min = w;
        }
    }

    cout << min << endl;

    return 0;
}
