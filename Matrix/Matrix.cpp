#include<iostream>
using namespace std;

int main(){
    int matrix[4][3];
    int rows;
    cout<<"Enter number of Rows: ";
    cin>>rows;
    int cols;
    cout<<"Enter number of Columns: ";
    cin>>cols;

    cout<<"Enter "<<(rows*cols)<<" elements: ";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}