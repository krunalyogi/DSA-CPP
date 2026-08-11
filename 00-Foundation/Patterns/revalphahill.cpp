#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(char j='E'-i;j<='E';j++){
            cout<<j;
        }
        cout<<endl;
    }
}