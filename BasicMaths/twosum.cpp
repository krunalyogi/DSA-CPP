
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//using vector
void FbyV(vector<int> &v,int target){
    
    auto left = v.begin();
    auto right = v.end()-1;
    while(left < right){
        int sum = *left + *right;
        if(sum > target){

             right--;
        }
        else if(sum < target){

            left++;
        }
        else{
         cout << left - v.begin() << " " << right - v.begin();
         break;

        }

    }
}

//using unordered map
void FbyM(vector<int> &v,int target){
    unordered_map<int,int> mp;
    for(int i=0;i<v.size();i++){
        int need = target - v[i];
        if(mp.find(need)!=mp.end()){
            cout<<mp[need]<<" "<<i;
        }
        mp[v[i]]=i;
    }
}

int main(){
    vector<int> v = {2,7,11,15};
    int target = 9;
    FbyV(v,target);
    cout<<endl;
    FbyM(v,target);
}


