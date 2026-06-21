//learning list
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(0);
    l.emplace_front(3);
    for(int x:l){
        cout<<x<<" ";
    }
//other functions same as vector
}