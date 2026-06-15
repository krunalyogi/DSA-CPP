#include<iostream>
using namespace std;
int main(){
    int num=1;
    for (int i=0;i<5;i++){
        if (i%2==0) num=1;
        else num = 0;
        for (int j=0;j<=i;j++){
            cout<<num;
            num=1-num;
        }
        cout<<endl;
    }
}