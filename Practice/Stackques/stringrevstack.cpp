#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    stack <char> st;
    cout<<"enter a string:";
    cin>>s;
    for(int i=0;i<=s.size();i++){
        st.push(s[i]);
    }
    cout<<"string stored on stack"<<endl;
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }  
}