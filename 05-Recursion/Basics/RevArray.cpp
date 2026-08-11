#include<iostream>
using namespace std;

void RevArray(int l,int r,int arr[]){
    if(l>=r){
        return ;
    }
    swap(arr[l],arr[r]);
    RevArray(l+1,r-1,arr);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int l = 0;
    int r = 4;
    RevArray(l,r,arr);
    for(int k=0;k<5;k++){
        cout<<arr[k];
    }
}