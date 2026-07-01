#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n>0){
        int temp= n/10;
        n=temp;
        count++;
    }
    cout<<count;
}