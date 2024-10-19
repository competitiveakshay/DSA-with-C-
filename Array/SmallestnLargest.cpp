#include<climits>
#include<iostream>

using namespace std;

int main(){
    int size = 5;
    int marks[size];
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallIndex;
    int largeIndex;

    for(int i = 0; i<size; i++){
        cin>>marks[i];
    }

    // for(int i = 0; i<size; i++){
    //     smallest = min(marks[i], smallest);
    //     largest = max(marks[i], largest);
    // }

    for(int i = 0; i<size; i++){
        if(marks[i]<smallest){
            smallest = marks[i];
            smallIndex = i;
        }

        if(marks[i]>largest){
            largest = marks[i];
            largeIndex = i;
        }
    }

    cout<<"smallest: "<<smallest<<" at index: "<<smallIndex<<endl;
    cout<<"largest: "<<largest<<" at index: "<<largeIndex<<endl;

}