// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         for(j=1;j<=10-(2*i);j++){
//             cout<<"  ";
//         }
//         for(j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5-i;j++){
//             cout<<"* ";
//         }
//         for(j=1;j<=2*i;j++){
//             cout<<"  ";
//         }
//         for(j=1;j<=5-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=5;
    int space=2*n-2;
    for(i=1;i<=2*n-1;i++){
        int star= i;
        if(i>n) star=2*n-i;
        //star
        for(j=1;j<=star;j++){
            cout<<"*";
        }
        //space
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        //star
        for(j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
    }
}