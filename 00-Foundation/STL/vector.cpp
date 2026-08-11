#include<iostream>
#include<vector>

using namespace std;

void EmplaceBack(vector<int> v){
    cout<<"emplace back example in vector here we are taking v as a vector and performing emplace back operation"<<endl;
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    cout<<"after emplace back 2:"<<endl;;
    v.emplace_back(2);

    for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
}

void IteratorExample(vector<int> v){
    cout<<"here is the example of iterator"<<endl;
    cout<<"itertating vector's second element:";
    auto i = v.begin();
    i++;
    cout<<*(i)<<" "<<endl;
}

void BeginEnd(vector<int> v){
    cout<<"---Example of begin and end---"<<endl;
    //first opetion of iterator
    cout<<"accessing first element of vector using begin()"<<endl;
    cout<<"using vector<int>::iterator..."<<endl;
    vector<int>::iterator i = v.begin();
    cout<<*(i)<<endl;

    //easy way
    cout<<"---iterator using auto---"<<endl;
    auto j = v.begin();
    cout<<*(j)<<endl;
    
    cout<<"accessing last elemnt of vector using end()"<<endl;
    auto k = v.end();
    k--;
    cout<<*(k)<<endl;
}

void Erase(vector<int> v){
    cout<<"Erase"<<endl;
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1);
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
}

void Insert(vector<int> v){
    cout<<"---Insert function---"<<endl;
    for ( auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    int UserIndex;
    int Element;
    cout<<"enter on which index you want to perform insetion:";
    cin>>UserIndex;
    cout<<"enter the element you want to insert:";
    cin>>Element;
    v.insert(v.begin()+UserIndex,Element);
    for ( auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    cout<<"inserting multiple element"<<endl;
    v.insert(v.begin()+1,2,0);
    for ( auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
}

void Size(vector<int> v){
    cout<<"size of the vector"<<endl;
    for ( auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    cout<<"size of the vector:";
    cout<<v.size()<<endl;

}

void PopBack(vector<int> v){
    cout<<"popback function"<<endl;
    cout<<"before pop back:";
    for ( auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    cout<<"after pop back:";
    v.pop_back();
     for ( auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
}

void Swap(vector<int> v){
    cout<<"swapping vector elements:";
    swap(v[1],v[2]);
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i);
    }
    cout<<endl;
    cout<<"swapping two vectors"<<endl;
    vector<int> w = {7,8,9,10};
    for(auto i=w.begin();i!=w.end();i++){
        cout<<*(i);
    }
    cout<<endl;
    v.swap(w);
    cout<<"after swap v:";
     for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i);
    }
    cout<<endl;
    cout<<"after swap w:";
     for(auto i=w.begin();i!=w.end();i++){
        cout<<*(i);
    }
    cout<<endl;
}
void Clear(vector<int> v){
    cout<<"vector to clear:";
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i);
    }
    cout<<endl;
    v.clear();

    for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i);
    }
    cout<<"vector cleared";
}

int main(){
    vector<int> v={1,2,3,4,5,6};   
    IteratorExample(v);
    EmplaceBack(v);
    BeginEnd(v);
    Erase(v);
    Insert(v);
    Size(v);
    PopBack(v);
    Swap(v);
    Clear(v);
}