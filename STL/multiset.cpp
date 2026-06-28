#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    for(int x:ms){
        cout<<x<<" ";
    }
    cout<<endl;
    int cnt = ms.count(1);
    cout<<cnt<<endl;

    ms.erase(ms.find(1));
    for(int x:ms){
        cout<<x<<" ";
    }
}