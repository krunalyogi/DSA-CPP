#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(const string &s,int l,int r){
    if(l>=r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    isPalindrome(s,l+1,r-1);
}
int main(){
    string s = "mada";
    bool result = isPalindrome(s,0,s.size()-1);
    if(result){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
}