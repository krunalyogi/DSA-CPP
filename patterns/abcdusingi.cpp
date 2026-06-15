#include<iostream>
using namespace std;
// int main(){
//     int j;
//     for(char i='A';i<='E';i++){
//         for (char j='A';j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
int main(){
    int i,j
    for(i=0;i<5;i++){
        char ch='A'+i;
        for(j=0;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}