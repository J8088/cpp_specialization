#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> PalindromFilter(vector<string> words, int minLength) {
    vector<string> palindroms;

    for (string word: words) {
        if (word.length() >= minLength) {
            string rw = "";
            for (int i = word.length() - 1; i >= 0; i--) {
                rw += word[i];
            }

            if (word == rw) {
                palindroms.push_back(word);
            }

        }
    }

    return palindroms;
}


int main() {

    int minLength;
    cin >> minLength;

    string str;
    vector<string> words;

    while (getline(cin, str, ' ')) {
        words.push_back(str);
    }

    vector<string> palindroms = PalindromFilter(words, minLength);

    for (string w: palindroms) {
        cout << w << endl;
    }

    return 0;
}
