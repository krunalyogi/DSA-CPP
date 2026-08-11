#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.emplace(3);
    cout<<st.top();
    st.pop();
    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();
    stack <int> st1,st2;
    st1.swap(st2);
}