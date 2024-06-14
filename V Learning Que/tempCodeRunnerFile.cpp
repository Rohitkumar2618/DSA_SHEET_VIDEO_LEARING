
if(arr[mid] < arr[mid-1]){
    return mid-1;
}

if(arr[mid] > arr[mid+1]){
    return mid;
}