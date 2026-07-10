#include<iostream>
using namespace std;
void PrintName5times(string name,int count,int n){
    if (count == n){
         return;
    }
    cout<<name<<endl;
    PrintName5times(name,count+1,n);
}

void Print1toN(int n){
    if(n>10){
        return;
    }
    cout<<n<<endl;
    Print1toN(n+1);
}

void PrintNto1(int n){
    if(n<1){
        return;
    }
    cout<<n<<endl;
    PrintNto1(n-1);
}

void SumOfnNnumbers(int n,int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    
    sum += n;
    SumOfnNnumbers(n-1,sum);
}

void BT1ton(int i){
    if(i<1){
        return;
    }
    BT1ton(i-1);
    cout<<i;
}

void Btnto1(int i){
    if(i>3){
        return;
    }
    Btnto1(i+1);
    cout<<i;
}
int Factorial(int i){
    if ( i == 0 || i == 1){
        return 1;
    }
    while(i>0){
        return i*Factorial(i-1);
    }
    return 0;
}
int main(){
    int i=10;
    string name = "krunal";
    int n = 5;
    //print name 5 times
    PrintName5times(name,0,n);

    //print 1 to n//
    Print1toN(1);
 
    //print n to 1
    PrintNto1(10);

    //sum of n numbers
    SumOfnNnumbers(10,0);
    
    //factorial 
    cout<<Factorial(10)<<endl;

    BT1ton(3);
    Btnto1(1);
}