#include<iostream>
using namespace std;

//--------Pass by reference through Pointers---------

// void pointer(int* ptr){
//     *ptr = 200;
// }

// int main(){
//     int a = 100;
//     cout<<"Value of a before calling pointer(): "<<a<<endl;
//     pointer(&a);
//     cout<<"Value of a after calling pointer(): "<<a<<endl;
// }

//----------Pass by reference through alias----------
void pointer(int &b){
    b = 2000;
}

int main(){
    int a = 100;
    cout<<"Value of a before calling pointer(): "<<a<<endl;
    pointer(a);
    cout<<"Value of a after calling pointer(): "<<a<<endl;
}