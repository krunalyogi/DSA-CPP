#include<iostream>
using namespace std;
int main(){
    int i;
    for ( i = 0; i < 5; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}