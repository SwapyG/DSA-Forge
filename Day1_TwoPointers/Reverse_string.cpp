#include <iostream>
#include <string>
#include <algorithm>  // for swap function
using namespace std;

/**
 * Reverse String
 * Reverses a string in-place using two pointers technique.
 *
 * Technique: Two Pointers with swapping
 * Time: O(n), Space: O(1)
 */
void reverse_string(string &s) {
    int start = 0;
    int end = s.length() - 1;

    // Move pointers toward center, swapping elements
    while (start < end) {
        swap(s[start], s[end]);  // Exchange characters
        start++;                 // Move left pointer right
        end--;                   // Move right pointer left
    }
    // String is reversed in-place, no return needed
}

int main() {
    string input;
    cout << "Enter string to reverse: ";
    getline(cin, input);

    cout << "Original: " << input << endl;
    reverse_string(input);
    cout << "Reversed: " << input << endl;

    return 0;
}
