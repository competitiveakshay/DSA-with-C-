#include<iostream>
#include<climits>

using namespace std;

int maxSum(int matrix[][3], int rows, int cols){
    int maximumSum = INT_MIN;
    for(int i=0; i<rows; i++){
        int rowSum = 0;
        for(int j=0; j<cols; j++){
            rowSum += matrix[i][j];
        }
        maximumSum = max(maximumSum, rowSum);
    }
    return maximumSum;
}

int main(){
    int matrix[3][3];
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    int cols;
    cout<<"Enter number of columns: ";
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

    cout<<"Maximum Row Sum is "<<maxSum(matrix, rows, cols);

    return 0;
}