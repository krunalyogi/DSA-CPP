#include<iostream>
using namespace std;
int main(){
    pair<int,int> p = {4,5};
    cout<<p.first<<endl;

    pair<int,pair<int,int>> q ={3,{2,5}};
    cout<<q.second.first<<" "<<q.first<<endl;

    pair<int,int> arr[4]={{2,1},{8,0},{5,3},{7,7}};
    for(int i=0;i<4;i++){
        cout<<arr[i].second;
    }

}