class Solution {
public:
    vector<int> twoPointer(vector<int>& arr, int k, int x) {
        int l = 0;
        int h = arr.size() - 1;

        while (h - l >= k) {
            if (abs(x - arr[l]) > abs(x - arr[h])) {
                l++;
            } else {
                h--;
            }
        }

        vector<int> ans;
        for (int i = l; i <= h; i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoPointer(arr, k, x);
    }
};
