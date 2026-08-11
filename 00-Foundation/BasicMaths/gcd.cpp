#include<iostream>
#include<algorithm>
using namespace std;
//brute force
int main(){
//     int n1=9;
//     int n2=12;
//     int gcd = 1;

//     for(int i = 1; i <= min(n1, n2); i++) {
//         if(n1 % i == 0 && n2 % i == 0) {
//             gcd = i;
//         }
//     }

// cout << gcd;
    int a=9;
    int b=12;
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a==0) cout<< b;
    else cout<< a;
}

//int gcd(int a, int b) {
//     while (b != 0) {
//         int rem = a % b;
//         a = b;
//         b = rem;
//     }
//     return a;
// }