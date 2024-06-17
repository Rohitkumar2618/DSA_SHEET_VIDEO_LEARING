#include <iostream>
#include <vector>
using namespace std;


int findPivot(vector<int>& arr){

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

int main(){

    // vector<int> arr = {12,14,16,2,4,6,8,10};
     vector<int> arr = {0, 1, 2, 3, 4, 5}; // 
    
    int ans = findPivot(arr);

    cout<<ans<<endl;
    return 0;
}