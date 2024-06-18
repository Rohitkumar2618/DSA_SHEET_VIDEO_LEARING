#include<iostream>
using namespace std;




int find_Odd_Occuring(int arr[],int n){

int s = 0;
int e = n;
int mid = s+(e-s)/2;


while( s<=e ){


// If the element is single
if(s == e){
    return s;
}

// Right side of array 
if(mid&1){

// Even index
    if(arr[mid] == arr[mid -1]){
        s =mid + 1;
    }
    //  Odd element
    else{
        e = mid-1;
    }
}
// left side of array
else{

// even index
if(arr[mid] == arr[mid+1]){
    s= mid+2;
}
// Odd index
else{
    e = mid;
}

}
mid = s+(e-s)/2;
}
return -1;

}

int main(){

    int arr[] = {1, 1, 2, 3, 3, 4, 4};
int n = 7;

    int ansIndex = find_Odd_Occuring( arr,n);

cout<<"the index is "<<ansIndex<<endl;

}