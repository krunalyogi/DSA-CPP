#include<iostream> 
using namespace std;

int oneton(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}

int fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int sumofdigits(int n){
    int sum=0;
    while(n>0){
        int Lastdigit = n%10;
        n/=10;
        sum = (sum*1)+Lastdigit;
    }
    return sum;
}
int ncr(int n,int r){
    int nfact = fact(n);
    int rfact = fact(r);
    int subfact = fact(n-r);
    int ncr = (nfact)/(rfact*subfact);
    return ncr;
}

void prime(int n){
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<n<<" "<<"is prime number"<<endl;
    }else{
        cout<<"not a prime number"<<endl;
    }
}

void binarynum(int n){
    int ans=0;
    int pow = 1;
    while(n>0){
        int rem = n%2;
        n/=2;
        ans += (rem * pow);
        pow = pow*10;
    }
    cout<<ans<<endl;
}
int main(){
    int n;
    int result = oneton(20);
    cout<<result<<endl;
    cout<<fact(10)<<endl;
    cout<<sumofdigits(123)<<endl;
    cout<<"ncr:"<<ncr(8,2)<<endl;
    binarynum(5);
    prime(18);
    
}