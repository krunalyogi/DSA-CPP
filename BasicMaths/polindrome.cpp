#include<iostream>
using namespace std;
int main(){
    int n=12321;
    int num=n;
    int rn=0;
    while(n>0){
        int ld=n%10;
        n=n/10;
        rn = (rn * 10)+ ld;
    }
    if (num==rn ){
        cout<<"polindrome";
    }else{
        cout<<"not polindrome";
    }
}