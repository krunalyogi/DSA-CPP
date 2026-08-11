#include<iostream>
using namespace std;
int main(){
    int n=1234;
    int rn= 0 ;
    while(n>0){
        int ld=n%10;
        n=n/10;
        rn = (rn*10)+ld;
    }
    cout<<rn;
}