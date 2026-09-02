#include<iostream>
using namespace std;
int main(){
    int arr[5] = {20,13,52,8,30};
    int max1,max2;
    if(arr[0] > arr[1]){
          max1 = arr[0];
          max2 = arr[1];
    }else{
         max2 = arr[0];
         max1 = arr[1];
    }
    for(int i = 2; i<=size(arr); i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
            
        }else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
        
    }
    
    cout<<"max element :"<<max1;
    cout<<"second max element :"<<max2;
}