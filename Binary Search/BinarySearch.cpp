#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size()-1;
    
    while(start<=end){
        // int mid = (start + end)/2;

        // ----------to prevent overflow-----------
        int mid = start + (end - start)/2;
        if(target>arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {12, 45, 67, 88, 99, 100};
    int target = 100;
    cout<<binarySearch(arr, target);
}