#include <iostream>
#include<iomanip>

using namespace std;

class Bank_account{

private:
    double balance;
public:
    Bank_account(double initialbalance){
    balance=(initialbalance>=0)?initialbalance:0;
    }

    void deposit(double amount){
    if (amount>0)
        balance+=amount;
    }
    void withdraw(double amount){
        if(amount>0&&amount<=balance)
            balance-=amount;
                  }
    void showbalance(){
    cout<<"current balance is: "<<balance<<"$"<<endl;
    }


};



int main()
{

Bank_account account(500);
account.deposit(200);
account.withdraw(100);
account.showbalance();

    return 0;

}
