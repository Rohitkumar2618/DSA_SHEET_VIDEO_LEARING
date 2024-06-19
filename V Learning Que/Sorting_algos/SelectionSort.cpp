#include <iostream>
#include<vector>
using namespace std;


void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// using two pointer approach steps: search smallest index in the array and using minIndex in n-1 [size search space (n-1) ]if get swap with i and move on
void selectionSort(vector<int>& arr) {
 

int n = arr.size();

for(int i=0;i<n-1;i++){
    int minindex = i;
    for(int j=i+1; j<n;j++){
        if(arr[j] < arr[minindex]){
            minindex = j;
        }
    }
    swap(arr[i],arr[minindex]);
}

}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};

    selectionSort(arr);

    print(arr);

    return 0;
}