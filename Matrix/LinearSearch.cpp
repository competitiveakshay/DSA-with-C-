#include<iostream>
using namespace std;

pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int index){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] == index){
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

int main(){
    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int rows = 4;
    int cols = 3;

    int index;
    cout<<"Enter the element you want to find: ";
    cin>>index;

    pair<int, int> result = linearSearch(matrix, rows, cols, index);

    if(result.first != -1 && result.second != -1){
        cout<<index<<" found at: ("<<result.first<<", "<<result.second<<")";
    }
    else{
        cout<<index<<" not found in the Matrix";
    }

    return 0;
}