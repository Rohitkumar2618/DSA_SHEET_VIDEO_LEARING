#include<iostream>


#include<vector>
using namespace std;

int  findPivot(vector<int>& arr){

int s = 0;
int e = arr.size()-1;
int mid = s+(e-s)/2;

while (s < e){

// If single element present ho
if(s == e){
    return s;
}

// agar jaha mid element pe ki value badi hai uske next element ke its mean wahii hai ans
if(arr[mid] > arr[mid+1]){
    return mid;
}

// agar jaha mid ke aage ke  element pe ki value badi hai  mid se to uske pahle ki value lenge mean (-1)
if(arr[mid] < arr[mid-1]){
    return mid-1;
}


// agar s pe jo  value hai agar vo  badi hai  mid e to  mid ko piche lao  left side jao  [e = mid-1]
else if(arr[s] > arr[mid]){
    e = mid-1;
}
// right side me jao  [s = mid+1]
else{
    s = mid+1;
}
 mid = s+(e-s)/2;

}
return -1;
}


int main(){

    // vector<int> arr = {12, 14, 16, 2, 4, 6, 8}; // Corrected the vector initialization
    vector<int> arr = {6, 1, 2, 3, 4, 5}; // Pivot index should be 2 (element 16)
    

    int pivot = findPivot(arr);

    cout << "Pivot Index: " << pivot << endl; // Corrected the output statement

    return 0;
}