/*
* Write a function PalindromFilter which takes a vector of strings and an integer minLength and returns all strings 
* from the given vector that are palindroms with length at least minLength;
* The given vector has length at most 100 strings. Each string length is at most 100 symbols;
*/

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
