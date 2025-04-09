#include <iostream>

using namespace std;

class Bankaccount{
private:
    double balance;
public:
    Bankaccount(double initialbalance){
        balance=(initialbalance>=0)?initialbalance:0;
    }
void deposit(double amount){
    if(amount>0)
        balance+=amount;
}
void withdraw(double amount){
if(amount>=0&&amount<=balance)
    balance-=amount;
}

void showbalance(){
cout<<"balance is: "<<balance<<endl;
}
};


int main()
{
    Bankaccount account(500);
    account.deposit(200);
    account.withdraw(100);
    account.showbalance();

    return 0;
}
