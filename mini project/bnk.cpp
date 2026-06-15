#include<iostream>
using namespace std;
void CreateAccount(string name,int &money){
    cout<<"----------CREATING ACCOUNT----------"<<endl;
    cout<<"enter account holder name:";
    cin>>name;
    cout<<"enter initial balance:";
    cin>>money;
}

void CheckBalance(int money){
    cout<<"----------CHECKING BALANCE----------"<<endl;
    cout<<"your balance is:"<<money<<endl;
}

void DepositMoney(int &money){
    int deposit;
    cout<<"----------DEPOSIT MONEY----------"<<endl;
    cout<<"enter amount to deposit money:";
    cin>>deposit;
    money += deposit;
    cout<<"-----deposit successful-----"<<endl;
}

void Withdraw(int &money){
    int withdraw;
    cout<<"----------WITHDRAWING MONEY----------"<<endl;
    cout<<"enter withdrawal amount:"<<endl;
    cin>>withdraw;
    if (withdraw>money){
        cout<<"??insufficiant balance??"<<endl;
    }
    else{
        money-=withdraw;
        cout<<"-----withdaw successful-----"<<endl;
    }
}

void ShowDetails(string name,int &money){
    cout<<"----------SHOWING DETAILS----------"<<endl;
    cout<<"account holder name:"<<name<<endl;
    cout<<"amount:"<<money<<endl;
}
int main(){
    string name;
    int money;
    int UserInput;
    bool dataentered = false;

    while(true){
        cout<<" -------------------------------WELCOME TO RAKESH BANK------------------------------"<<endl;
        cout<<"1.create account \n2.deposit money \n3.withdraw money \n4.check balance \n5.show details"<<endl;
        cout<<"enter from 1 to 5:";
        cin>>UserInput;
        switch(UserInput){
            case 1:
            CreateAccount(name,money);
            dataentered = true;
            break;

            case 2:
            if (dataentered){
                DepositMoney(money);
            }
            else{
                cout<<"??type 1 and enter data??"<<endl;
            }
            break;
            
            case 3:
            if (dataentered){
                Withdraw(money);
            }else{
                cout<<"??type 1 and enter data??"<<endl;
            }
            break;

            case 4:
            if (dataentered){
                CheckBalance(money);
            }else{
                cout<<"??type 1 and enter data??"<<endl;
            }
            break;

            case 5:
            if (dataentered){
                ShowDetails(name,money);
            }else{
                cout<<"??type 1 and enter data??"<<endl;
            }
            break;

            default:
            return 0;
        }
    }
}