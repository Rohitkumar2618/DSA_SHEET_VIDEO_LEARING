#include <iostream>
#include<vector>
using namespace std;


void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

//! For loop using two for loops with 2 pointer we can perform this sorting [n-i-1]
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};

    bubbleSort(arr);

    print(arr);

    return 0;
}