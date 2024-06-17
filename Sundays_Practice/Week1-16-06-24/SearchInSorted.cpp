#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findPivot(vector<int>& nums){

int s = 0;
int e = arr.size();
int mid = s+(e-s)/2;

while(s < e){


if(s == e){
    return s;

}

 if(arr[mid]> arr[mid+1]){
    return mid;

}

if(arr[mid] < arr[mid-1]){
return mid-1;
}


if(arr[s] > arr[mid]){
    e = mid-1;
}
else{
    s = mid+1;
}
mid = s+(e-s)/2;
}
return -1;
}


int binarySearch(vector<int>& nums, int target, int s, int e){

    
     int mid = s+(e-s)/2;

     while(s<e){

        if(s == e){
            return -1;
        }
     
     if(nums[mid] == target){
        return mid;
     }

     if(nums[mid] > target){
        e = mid-1;
     }
     else{
        s = mid+1;
     }
mid = s+(e-s)/2;
     }
     return -1;
}



int Search(vector<int>& nums, int target){

int pivotIndex = findPivot(nums);
int n = nums.size();

if(pivotIndex == -1){
    return binarySearch(nums, target, 0, n-1);
}

if(nums[pivotIndex] == target){
    return pivotIndex;
}

if(nums[0] <= target){
    return binarySearch(nums, target, 0, pivotIndex-1);
}

else{
    return binarySearch(nums, target, pivotIndex+1, n-1);
}


return -1;
}



int main(){

}