#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Array before reversing\n";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArray(arr, size);

    cout<<"Array after reversing\n";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
