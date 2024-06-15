#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;

        while (s <= e) {
            // If single element is present
            if (s == e) {
                return s;
            }

            // If the middle element is greater than the next element, then mid is the pivot
            if (mid < e && nums[mid] > nums[mid + 1]) {
                return mid;
            }

            // If the middle element is less than the previous element, then mid-1 is the pivot
            if (mid > s && nums[mid] < nums[mid - 1]) {
                return mid - 1;
            }

            // If the element at start is greater than the mid element, pivot must be to the left
            if (nums[s] > nums[mid]) {
                e = mid - 1;
            } else {
                // Else, pivot must be to the right
                s = mid + 1;
            }

            mid = s + (e - s) / 2;
        }
        return -1;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivot(nums);
        int n = nums.size();



        // If the array is not rotated, pivotIndex will be -1
        if (pivotIndex == -1) {
            return binarySearch(nums, 0, n - 1, target);
        }

        // If the target is within the range from the start to the pivot
        if (target >= nums[0] && target <= nums[pivotIndex]) {
            return binarySearch(nums, 0, pivotIndex, target);
        } else {
            // Otherwise, search in the second part
            return binarySearch(nums, pivotIndex + 1, n - 1, target);
        }
    }
};

int main() {
    vector<int> nums = {12, 14, 16, 2, 4, 6, 8, 10, 12};
    int target = 16;

    Solution solution;
    int result = solution.search(nums, target);

    cout << "solution is: " << result << endl;

    return 0;
}
