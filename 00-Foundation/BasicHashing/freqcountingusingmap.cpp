//frequency counting using map
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> mp;
    int arr[5] = {1,2,2,3,1};
    for(int i = 0;i<5;i++){
        mp[arr[i]]+=1;
    }
    cout<<mp[3];
}

