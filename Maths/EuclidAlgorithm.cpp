#include<iostream>
using namespace std;

int EuclidAlgorithm(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int LCM(int a, int b){
    int gcd = EuclidAlgorithm(a, b);
    return (a*b)/gcd;
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"GCD is :"<<EuclidAlgorithm(a, b)<<endl;
    cout<<"LCM is :"<<LCM(a, b);

    return 0;
}