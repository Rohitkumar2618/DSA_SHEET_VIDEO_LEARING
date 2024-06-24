
// Brute force 
class Solution {
public:
    vector<int> twoPointer(vector<int>& arr, int k, int x) {

        // Taking two pointer approach
        int l = 0;
        int h = arr.size() - 1;

// ye loop jav tak h-l jab tak chota na ho tab tak chalega ye hame uss window ke karib layega ans wali window
        ,
            // check krega ki left wala range of diff between x - l is big or x - h 
            if (abs(x - arr[l]) > abs(x - arr[h])) {
                l++;
            } else {
                h--;
            }
        }
// Store in the vector
        vector<int> ans;
        for (int i = l; i <= h; i++) {
            ans.push_back(arr[i]);
        }
        // return the vectoe
        return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoPointer(arr, k, x);
    }
};



// most optimal solution

#include <vector>
using namespace std;

class Solution {
public:
    // Function to find the lower bound index of x in the sorted array
    int lowerBound(vector<int>& arr, int x) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = end;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // If mid element is greater than or equal to x, move to the left half
            if (arr[mid] >= x) {
                ans = mid;
                end = mid - 1;
            } else {
                // If mid element is less than x, move to the right half
                start = mid + 1;
            }
        }
        return ans;
    }

    // Function to find k closest elements to x using binary search and two pointers
    vector<int> bs_method(vector<int>& arr, int k, int x) {
        // Find the index of the lower bound of x
        int h = lowerBound(arr, x);
        int l = h - 1;

        // Use two pointers to find the closest elements
        while (k--) {
            if (l < 0) {
                // If left pointer is out of bounds, move the right pointer
                h++;
            } else if (h >= arr.size()) {
                // If right pointer is out of bounds, move the left pointer
                l--;
            } else if (x - arr[l] > arr[h] - x) {
                // If right element is closer to x, move the right pointer
                h++;
            } else {
                // If left element is closer to x, move the left pointer
                l--;
            }
        }

        // Return the subarray of k closest elements
        return vector<int>(arr.begin() + l + 1, arr.begin() + h);
    }

    // Main function to find k closest elements to x
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return bs_method(arr, k, x);
    }
};
