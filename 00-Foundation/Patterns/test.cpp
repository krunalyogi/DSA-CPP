#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            cout<<" ";
        }
        int num=1;
        int breakpoint = (2*i+1)/2;
        for(j=1;j<=2*i+1;j++){
            cout<<num;
            if(j<=breakpoint) num++;
            else num--;
        }
        cout<<endl;
    }
}