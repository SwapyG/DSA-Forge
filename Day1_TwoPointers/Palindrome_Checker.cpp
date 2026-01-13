//
// Created by Swapnil Gaikwad on 13/1/2026.
//

#include <iostream>
#include <string>
using namespace std;

/**
 * Valid Palindrome
 * Check if a string is a palindrome after removing non-alphanumeric characters
 * and converting to lowercase.
 *
 * Technique: Two Pointers with character filtering
 * Time: O(n), Space: O(1)
 */
bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left <= right) {
        // Skip non-alphanumeric characters from left
        while (left < right && !isalnum(s[left])) {
            left++;
        }

        // Skip non-alphanumeric characters from right
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // Compare characters (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        // Move pointers inward
        left++;
        right--;
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a string to check if it's a palindrome: ";
    getline(cin, input);

    cout << "Result: " << boolalpha << isPalindrome(input) << endl;

    return 0;
}
