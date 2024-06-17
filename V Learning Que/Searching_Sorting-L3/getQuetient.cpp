#include <iostream>
using namespace std;


int getQuetient(int divisor, int dividant){

int s = 0;
int e = dividant;
int ans = 0;

int mid = s+(e-s)/2;

while( s<=e){

if(mid* divisor == dividant){
    return mid;
}

if(mid* divisor < dividant ){
  
ans = mid;

s = mid+1;
}
else{
    e = mid-1;
}

mid = s+(e-s)/2;

}
return -1;

}

int main(){

  int divisor = 9;
   int dividend = 27;

    int ans = getQuetient(abs(divisor), abs(dividend));


    if((divisor < 0 && dividend > 0) && (divisor < 0 && dividend > 0) ){
        ans = 0- ans;
    } 

cout<< "The Quetient is :" << ans;

}