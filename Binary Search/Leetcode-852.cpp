#include<iostream>
using namespace std;

// Peak Index in a Mountain Array
int peakElement(int arr[], int n){
    int start = 1, end = n-2;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid]){
            return mid;
        }
        else if(arr[mid-1] < arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl;
    int arr[n];

    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    // int arr[] = {0,3,8,7,5,2};
    // int n = sizeof(arr)/sizeof(int);

    cout<<"Index of Peak Element: "<<peakElement(arr, n);
    return 0;
}