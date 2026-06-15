#include <iostream>
#include <random> // Required header
using namespace std;

void GameMain(int RandNum){
    int UserInput;
    int attempt=5;

    while (true){
        cout<<"Enter your guess:"<<endl;
        cin>> UserInput;
        if(UserInput==RandNum){
            cout<<"correct the number was:"<<RandNum;
            break;
        }
        else if (UserInput > RandNum)
        {
            cout<<"guess lower"<<endl;
            
            attempt-=1;
            cout<<"attempt left:"<<attempt<<endl;
            
        }
        else if (UserInput < RandNum)
        {
            cout<<"guess higher"<<endl;
            
            attempt-=1;
            cout<<"attempt left:"<<attempt<<endl;
            
        }
        if (attempt==0){
            cout<<"number was:"<<RandNum<<endl;
            cout<<"better luck next time";
            break;
        }
        
        
    }
}
int main() {
    random_device rd;
    
    // 2. Initialize the standard Mersenne Twister engine with the seed
    mt19937 gen(rd());
    
    // 3. Define a uniform integer distribution range [inclusive, inclusive]
    uniform_int_distribution<int> distr(1, 100);

    int RandNum = distr(gen);

    GameMain(RandNum);
    return 0;
}
