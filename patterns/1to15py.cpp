#include<iostream>
using namespace std;
void main(){
    int i,j;
    int prev=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<prev;
            prev+=1;
        }
        cout<<endl;
    }
}