#include<iostream>
using namespace std;
/* 
we are implementing stack
stack follows lifo order and it have this operations :
push()
pop()
top()
size() 

so first we'll create a stack and after that well implement this operations on it...
*/ 
int top = -1;
const int MAX = 5;
int st[MAX];

void push(){
    int value;
    if(top==MAX -1){
        cout<<"stack overflow"<<endl;
        return;
    }
    cout<<"enter value:";
    cin>>value;
    st[++top]=value;
}

void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return;
    }
    st[top--];
    cout<<"element popped"<<endl;
}

int peek(){
    return st[top];
}

void size(){
    cout<<"the size of stack is:"<<top+1;
}
int main(){

    push();
    push();
    cout<<peek()<<endl;
    pop();
    cout<<peek();
    size();
}
