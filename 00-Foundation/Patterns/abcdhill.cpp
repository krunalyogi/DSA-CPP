#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=5;
    for(i=0;i<5;i++){
        for (j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        
        for(j=1;j<=2*i+1;j++){
            cout<<ch;
            if (j<= breakpoint) ch++;
            else ch--;
            }
            cout<<endl;
        }
        
    }
