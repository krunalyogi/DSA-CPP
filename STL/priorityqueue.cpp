#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.emplace(2);
    pq.emplace(10);
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();

    //minimun heap
    priority_queue<int,vector<int>,greater<int>> p;
    p.push(2);
    p.push(6);
    p.push(8);
    cout<<p.top();
}