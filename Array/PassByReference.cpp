#include<iostream>
using namespace std;

//array is itself a pointer, it stores the address of it's first element.

void changeArr(int arr[], int size){
    for(int i = 0; i<size; i++){
        arr[i] = 3*arr[i];
    }
}

int main(){
    int arr[] = {1,2,3};

    changeArr(arr,3);

    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";
    }

}