#include<iostream>
using namespace std;
int main(){
    int i,j;
    for (i=0;i<5;i++){
        for (j=0;j<=i;j++){
            cout<<"* ";
        }
    cout<<endl;
    }
    for (i=1;i<5;i++){
        for (j=0;j<=5-i-1;j++){
            cout<<"* ";
        }
    cout<<endl;
}
}