#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(4);
    st.insert(3);
    st.insert(5);
    for(auto i = st.begin();i!=st.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    auto l = st.lower_bound(2);
    auto u = st.upper_bound(3);
    cout<<*l<<" "<<*u<<" ";
    cout<<endl;
    auto s=st.find(2);
    auto e=st.find(4);
    st.erase(s,e);
     for(auto i = st.begin();i!=st.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    st.erase(5);
    int c=st.count(2);
    cout<<c;
}