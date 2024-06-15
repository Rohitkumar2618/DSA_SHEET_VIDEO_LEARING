#include <iostream>
using namespace std;
#include <vector>
#include<bits/stdc++.h>


/*Problem Statement:
 You are given an array of prices where prices[i] is the price of a given stock on an ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/



// Brute Force approach With TLE MAREGA

int maxProfit(vector<int> &arr) {

    int maxPro = 0;
    int n = arr.size();


// i itteretating  for buying the stock part 
    for (int i = 0; i < n; i++) {
        // j itteretating  for buying the stock part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
            maxPro = max(arr[j] - arr[i], maxPro);
            }
        }
        }

    return maxPro;

}

// Optimal approach

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
        int minPrice= INT_MAX;
        int maxProfit = 0;
   
    for(int i=0; i<n; i++){
       
    //    Sabse chota kon hai  min Price ki current element jo hai usee minprice me add kro 
       minPrice = min(minPrice, prices[i]);

    //    max profit
    // jo element maxProfit mai already hai vo ya [current element - minprice] --- Max profit ka nikalne ka way
    maxProfit = max(maxProfit,   prices[i]-minPrice);

    }

return maxProfit;
    }
};




int main(){

    vector<int> arr = {7,1,5,3,6,4};

    int profit = maxProfit(arr);


    cout<< profit;
}