#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool mycomparator(int&a,int b){
   return a > b;
}

// When we want to sort a vector using the sort function with decending order we need to use extra comparator like upper one and this function pass to a sorting function
int sortingDesending(vector<int>&arr2){

    sort(arr2.begin(), arr2.end(), mycomparator);
}


// Assending order Sortings
int sortingAssending(vector<int>&arr){

    sort(arr.begin(), arr.end());
}


int main(){

vector<int>arr = {7,6,5,4,3,2,1};
vector<int>arr2 = {1,2,3,4,5,6,7};

sortingAssending(arr);
for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
}

cout<<endl;

sortingDesending(arr2);
for(int i=0; i<arr.size(); i++){
    cout<<arr2[i]<<" ";
}



}