//we are implementing selection sort 
#include<iostream>
using namespace std;
int main(){
    int arr[6] = {13,46,24,52,20,9};
    for(int i=0;i<5;i++){
        int min = i;
        for(int j=i;j<=5;j++){
            if(arr[j]<arr[min]){
                min =j;
            }
            swap(arr[min],arr[i]);
        }
    }
    for(int k=0;k<6;k++) cout<<arr[k]<<" ";
}
