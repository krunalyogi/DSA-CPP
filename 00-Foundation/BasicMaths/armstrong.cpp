#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = n;
    int sum = 0;
    while(n>0){
        int LastDigit = n % 10;
        n /= 10;
        sum = (sum * 1) + LastDigit*LastDigit*LastDigit;
    }
    if (sum==num){
        cout<<"armstrong num";

    }
    else{
        cout<<"not armstrong num";
    }
}