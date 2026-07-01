//sorting array
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void SortingArray() {
    int arr[] = {4,2,1,9,6};
    sort(arr, arr+5);  //Sort from arr to arr+5 
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4];
}

//sorting vector
void SortingVector(){
    vector<int> v={9,2,5,3,7};
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
}
void SortingAd(){
    int arr[]={4,5,2,3,1};
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<size(arr);i++){
        cout<<arr[i]<<" ";
    }
}

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

void SortingVd(){
    vector<int> v={9,5,1,2,8};
    sort(v.begin(),v.end(),greater<int>());
    for(int i:v){
        cout<<i<<" ";
    }
}

int main(){
    cout<<"sorting array";
    SortingArray();
    cout<<endl;
    cout<<"sorting vector";
    SortingVector();
    cout<<endl;
    cout<<"sorting array and vector in descading order"<<endl;
    cout<<"sorting array:";
    SortingAd();
    cout<<endl;
    cout<<"sorting vector:";
    SortingVd();
    cout<<endl;

    //custom sorting for pairs//
    cout<<"custom function for sorting pairs"<<endl;
     vector<pair<int, int> > vec = {{10,3}, {20, 1}, {30, 2}};
    sort(vec.begin(), vec.end(), sortbysec);
    for(int i=0; i<3; i++) { //
        cout<<vec[i].first<<" "<<vec[i].second<<"\n";  //print the vec[i].first and then the vec[i].second
    }
    return 0;
}