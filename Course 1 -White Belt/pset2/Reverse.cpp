#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void Reverse(vector<int>& v) {
    for (int i = 0, j = v.size() - 1; i < v.size() / 2; i++, j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main() {
    string line;
    int num;
    vector<int> numbers;

    getline(cin, line);
    istringstream stream(line);
    while (stream >> num) {
        numbers.push_back(num);
    }

    Reverse(numbers);

    for (int i : numbers) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
