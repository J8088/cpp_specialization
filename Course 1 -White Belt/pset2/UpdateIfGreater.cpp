/*
* Write a function UpdateIfGreater that takes two integers as arguments;
* If the first argument is more than the second the function assigns the first argument's value to the second argument;
*/
    
#include <iostream>

using namespace std;

void UpdateIfGreater(const int& first, int& second) {
    if (first > second) {
        second = first;
    }
}
