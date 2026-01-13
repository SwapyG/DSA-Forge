#include <iostream>
#include <vector>
using namespace std;

/**
 * Remove Duplicates from Sorted Array
 * Removes duplicates in-place and returns count of unique elements.
 *
 * Technique: Two Pointers (Same Direction - Read/Write)
 * Time: O(n), Space: O(1)
 */
int removeDuplicates(vector<int>& nums) {
    // Handle edge cases
    if (nums.size() <= 1) return nums.size();

    int writeIndex = 1;  // Position to place next unique element

    // Read through array starting from index 1
    for (int readIndex = 1; readIndex < nums.size(); readIndex++) {
        // If current element is different from last unique element
        if (nums[readIndex] != nums[writeIndex - 1]) {
            nums[writeIndex] = nums[readIndex];  // Keep this unique element
            writeIndex++;                        // Move write position forward
        }
        // If same, skip it (duplicate) - don't write, don't increment writeIndex
    }

    return writeIndex;  // Number of unique elements
}

// Helper function to print vector
void printVector(const vector<int>& vect) {
    for (const auto& element : vect) {
        cout << element << " ";
    }
    cout << "\n";
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter " << size << " sorted integers: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    cout << "Original array: ";
    printVector(nums);

    int uniqueCount = removeDuplicates(nums);

    cout << "Modified array (first " << uniqueCount << " elements are unique): ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << "\nUnique elements count: " << uniqueCount << "\n";

    return 0;
}
