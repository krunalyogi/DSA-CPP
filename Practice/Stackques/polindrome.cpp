#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    stack <char> st;
    cout<<"enter string to check if its polindrome or not:";
    cin>>s;
    int j=0;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        if(st.top()!=s[j]){
            cout<<"not polindrome";
            return 0;
        }
        st.pop();
        j++;
    }
    if(st.empty()){
        cout<<"polindrome";
    }
}