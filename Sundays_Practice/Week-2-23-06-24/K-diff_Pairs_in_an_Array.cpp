// Brute force 

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>>ans;
        
          int i = 0; int j = 1;
          while(j < nums.size()){
            int diff = nums[j]-nums[i];

            if(diff == k){
                ans.insert({nums[i],nums[j]});
            }

            if(diff > k) {
                i++;
            }
            else{
                j++;
            }

            if(i == j){
                j++;
            }
          }
return ans.size();
    }
};


// Optimal Approach


class Solution {
public:
    // Binary search to find the index of x in nums starting from s
   int bs(vector<int>& nums, int s, int x) {
        int e = nums.size() - 1;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;  // Use this to prevent overflow
            
            if (nums[mid] == x) {
                return mid;
            }
            
            if (nums[mid] > x) {
                e = mid - 1;  // Move to the left half
            } else {
                s = mid + 1;  // Move to the right half
            }
        }
        
        return -1;  // If x is not found
    }

    int findPairs(vector<int>& nums, int k) {
        set<pair<int, int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (bs(nums, i + 1, nums[i] + k) != -1) {
                ans.insert({nums[i], nums[i] + k});
            }
        }
        return ans.size();
    }
};
