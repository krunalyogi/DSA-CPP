#include<iostream>
using namespace std;
int main(){
    string s = "i love programming";
    string rev = "";
    auto endelement = s.end()-1;
    for(auto i = s.end()-1;i!=s.begin();i--){
        if(*i==' '){
           rev.append(i+1,endelement+1);
           rev.append(" ");
           endelement=i-1; 
        }
    }
        rev.append(s.begin(),endelement+1);
        cout<<rev;
}