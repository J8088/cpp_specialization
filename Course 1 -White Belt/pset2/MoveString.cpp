/*
* Write a function MoveStrings that takes two vectors of strings as parameters and adds all strings 
* from the first vector at the end of the second vector;
* After the function terminated the first vector must be empty;
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (string s : source) {
        destination.push_back(s);
    }

    source.clear();
}

int main() {

    string line;
    string str;
    vector<string> source;
    vector<string> destination;

    getline(cin, line);

    std::istringstream stream(line);
    while (stream >> str) {
        source.push_back(str);
    }

    getline(cin, line);

    std::istringstream stream2(line);
    while (stream2 >> str) {
        destination.push_back(str);
    }


    MoveStrings(source, destination);

    int i = 0;
    cout << "Source after:" << endl;
    for (string s: source) {
        cout << "string: " << i << " " << s << endl;
        i++;
    }

    cout << endl;

    i = 0;
    cout << "Destination after:" << endl;
    for (string s: destination) {
        cout << "string: " << i << " " << s << endl;
        i++;
    }

    return 0;
}
