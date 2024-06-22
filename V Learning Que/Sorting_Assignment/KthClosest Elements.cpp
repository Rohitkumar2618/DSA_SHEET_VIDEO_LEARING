
// Brute force 
class Solution {
public:
    vector<int> twoPointer(vector<int>& arr, int k, int x) {

        // Taking two pointer approach
        int l = 0;
        int h = arr.size() - 1;

// ye loop jav tak h-l jab tak chota na ho tab tak chalega ye hame uss window ke karib layega ans wali window
        while (h - l >= k) {
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