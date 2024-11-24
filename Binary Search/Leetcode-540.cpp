#include<iostream>
using namespace std;

int singleElement(int arr[], int n){
    if(n==1) return arr[0];
    int start = 0, end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(mid == 0 && arr[0] != arr[1]) return arr[mid];
        if(mid == n-1 && arr[n-1] != arr[n-2]) return arr[mid];

        if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]) return arr[mid];

        if(mid%2 == 0){
            if(arr[mid-1] == arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(arr[mid-1] == arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,2,3,3,4,4,8,8,9,9};
    int n = sizeof(arr)/sizeof(int);

    cout<<singleElement(arr, n);
    return 0;
}