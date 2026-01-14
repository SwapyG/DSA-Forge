#include <iostream>
#include <vector>
using namespace std;

/**
 * Squares of a Sorted Array
 * Returns array of squares sorted in non-decreasing order.
 *
 * Technique: Two Pointers from both ends, building result backwards
 * Key Insight: Largest squares come from array extremes
 * Time: O(n), Space: O(n)
 */
vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);  // Result array of same size

    int left = 0;           // Left pointer at start
    int right = n - 1;      // Right pointer at end
    int pos = n - 1;        // Fill result array from end to start

    // Continue until pointers cross
    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        // Place the larger square at current position
        if (leftSquare > rightSquare) {
            result[pos] = leftSquare;
            left++;         // Move left pointer right
        } else {
            result[pos] = rightSquare;
            right--;        // Move right pointer left
        }
        pos--;              // Move to next position (backwards)
    }

    return result;
}

// Helper function to print vector
void printVector(const vector<int>& vect) {
    cout << "[";
    for (size_t i = 0; i < vect.size(); i++) {
        cout << vect[i];
        if (i < vect.size() - 1) cout << ", ";
    }
    cout << "]";
}

int main() {
    // Test case 1
    vector<int> nums1 = {-4, -1, 0, 3, 10};
    cout << "Input: ";
    printVector(nums1);
    cout << "\nOutput: ";
    vector<int> result1 = sortedSquares(nums1);
    printVector(result1);
    cout << "\n\n";

    // Test case 2
    vector<int> nums2 = {-7, -3, 2, 3, 11};
    cout << "Input: ";
    printVector(nums2);
    cout << "\nOutput: ";
    vector<int> result2 = sortedSquares(nums2);
    printVector(result2);
    cout << "\n";

    return 0;
}
