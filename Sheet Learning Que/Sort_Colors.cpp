#include<iostream>
using namespace std;
#include <vector>

void sortColors(int arr[],int n) {
        
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid <= high){

            if(arr[mid] == 0){
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                swap(arr[mid], arr[high]);
                  high--;
            }
        }
      
    }

    int main(){

 int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortColors(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    }