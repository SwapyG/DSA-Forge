#include<vector>
#include<iostream>


using namespace std ;


void twoSumII(const vector<int> &vect, const int target) {
    int left = 0;
    int right = vect.size() - 1;
    while (left < right) {
        int sum = vect[left] + vect[right];
        if (sum == target) {
            cout << "The indices are " << left + 1 << " & " << right + 1 << "\n";
            return;
        }
        if (sum > target) {
            right--;
        } else {
            left++;
        }
    }
}


int main() {
    int size;
    cin >> size;
    vector<int> vect;
    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        vect.push_back(element);
    }

    int target;
    cin >> target;

    twoSumII(vect, target);


    return 0;
}
