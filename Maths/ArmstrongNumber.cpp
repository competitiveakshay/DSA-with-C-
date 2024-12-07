#include<iostream>
#include<cmath>

using namespace std;

bool isArmstrong(int n){
    int copyOfN = n;
    int numberOfDigits = 0;
    int sumofPowers = 0;

    int temp = n;
    while(temp != 0){
        int digit = n%10;
        numberOfDigits++;
        temp = temp/10;
    }

    temp = n;
    while(temp != 0){
        int digit = temp%10;
        sumofPowers += pow(digit, numberOfDigits);
        temp = temp/10;
    }
    return sumofPowers == copyOfN;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    if(isArmstrong(n)){
        cout<<n<<" is an Armstrong Number"<<endl;
    }
    else{
        cout<<n<<" is not an Armstrong Number"<<endl;
    }

    return 0;
}