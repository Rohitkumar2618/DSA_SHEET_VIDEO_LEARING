

#include<iostream>
#include<vector>
using namespace std;


int searchNearlySorted(vector<int>arr,int target,int n){


int s = 0;
int e = n;
int mid = s+(e-s)/2;
int ans = -1;


while(s<=e){

        // return before 
    if(arr[mid-1] == target){
        return mid-1;
    }
    if(arr[mid] == target){
        return mid;
    }
      if(arr[mid+1] == target){
        return mid+1;
    }


    if(arr[mid] < target){
        ans = mid;
        s = mid+2;
    }
    else{
        e = mid-2;
    }
    
}
mid = s+(e-s)/2;

return -1;
}






int main(){

vector<int> arr = {20,10,30,50,40,70,60};
int target = 20;
int n = 7;

int findIndex = searchNearlySorted(arr,target,n);

cout<<"Target Index on :" << findIndex << endl;

return 0;
}