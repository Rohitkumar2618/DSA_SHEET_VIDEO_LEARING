#include <iostream>
using namespace std;

// Brute force approach
// ! Using  two pointer approach 
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // Sorting kiya 
        sort(nums.begin(), nums.end());
        // Unique element hi rakhne hai to store kiya pain me
        set<pair<int,int>>ans;
        
        // To pointer approacj se kr rahe isliye pointer liye jo travers krne ke liye

          int i = 0; int j = 1;

        //   Loop chalaya traverse ke liye 
          while(j < nums.size()){
            // diff nikalke k se compare kiya 
            int diff = nums[j]-nums[i];
              
            //   if samee hai to add or dono pointer ko aage badao
            if(diff == k){
                ans.insert({nums[i],nums[j]});
            }
// Window short krne ke liye i++
            if(diff > k) {
                i++;
            }
            // same window small case
            else{
                j++;
            }
//  aagar same hai to ek pointer aage banao kuaki unique hona
            if(i == j){
                j++;
            }
          }
        //   At the end give ans as a output 
return ans.size();
    }
};


// Using Sorting and binary search approach

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
