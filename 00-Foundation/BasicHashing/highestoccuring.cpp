//highest occuring element using hashing
#include<iostream>
#include<map>
using namespace std;
int main(){

    map<int,int> mp;
    int arr[10] = {1,2,3,4,2,3,1,6,4,2};
    for(int i=0;i<10;i++){
        mp[arr[i]]+=1;
    }
    int maxFreq = 0;
    int maxElement = 0;
    for(auto it:mp){
         if(it.second > maxFreq){
             maxFreq = it.second;
             maxElement = it.first;
            }
    }
    cout<<maxElement;
}