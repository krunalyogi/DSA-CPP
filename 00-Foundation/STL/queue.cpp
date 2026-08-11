#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(5); 
    cout<<q.back();
    cout<<q.front();
}