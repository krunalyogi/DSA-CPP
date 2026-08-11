#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<5;i++){
        for (char ch='A';ch<=(4-i)+'A';ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}