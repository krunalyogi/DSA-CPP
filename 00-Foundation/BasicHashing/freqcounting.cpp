//basic hashing 
#include<iostream>
using namespace std;
int main(){
    int hash[13]={0};
    int arr[5] = {1,3,2,3,1};
    int num;
    for(int i=0;i<5;i++){
        hash[arr[i]]+=1;
    }
    cout<<"enter number to find freq:";
    cin>>num;
    cout<<hash[num];
}