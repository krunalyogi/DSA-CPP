#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.emplace_back(3);
    dq.emplace_front(4);
    for(int x:dq){
        cout<<x;
    }
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
    for(int x:dq){
        cout<<x;
    }
}