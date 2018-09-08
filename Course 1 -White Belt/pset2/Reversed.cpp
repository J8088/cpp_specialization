/*
* Write a function vector<int> Reversed(const vector<int>& v) that returns copy of the given vector
* with its elements in the reverse order;
*/

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> Reversed(const vector<int>& v) {
    vector<int> reversedV;
    for (int i = v.size() - 1; i >= 0; i--) {
        reversedV.push_back(v[i]);
    }

    return reversedV;
}

int main() {
    string line;
    int num;
    vector<int> numbers;

    getline(cin, line);
    istringstream stream(line);
    while(stream >> num) {
        numbers.push_back(num);
    }

    vector<int> reversedNumbers = Reversed(numbers);

    for (int i : reversedNumbers) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
