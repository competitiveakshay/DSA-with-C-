#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i]==target)
        return i;
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the values: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter value you want to find: ";
    cin>>target;

    cout<<linearSearch(arr, size, target);
    return 0;
}