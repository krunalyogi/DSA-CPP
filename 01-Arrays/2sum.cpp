#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[5] = {1,2,4,5,6};
    int l = 0;
    int r = 4;
    int target = 9;
    while(l<r){
        int sum = a[l] + a[r];
        if(sum == target){
            cout<<l<<" "<<r;
            break;
        }else if(sum < target){
            l++;
        }else{
            r--;
        }
    }
}