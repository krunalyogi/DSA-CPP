#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    int num;
    int revnum = 0;
    cout<<"enter number:";
    cin>>num;
    while(num>0){
        int lastdigit = num%10;
        revnum = (revnum * 10)+lastdigit;
        num/=10;
    }
     while(revnum>0){
        int ld = revnum%10;
        st.push(ld);
        revnum/=10;
    }
    
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}