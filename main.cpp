#include <iostream>
#include<iomanip>

using namespace std;

class salary{
public:
    salary();
    void set_salary();
    void print();

private:
    bool check(int);
    int months[12];
    int total;
};

salary::salary(){
for(int i=0;i<12;i++)
    months[i]=0;
total=0;
}

bool salary::check(int value){
return value>=0?true:false;
}

void salary::set_salary(){
int amount;

for(int i=0;i<12;i++){
    cout<<"enter "<<i+1<<". salary";
    do{
        cin>>amount;
    }while(!check(amount));

months[i]=amount;
total+=months[i];
}
}


void salary::print(){
cout<<"monthly salaries"<<endl;

for(int i=0;i<12;i++)
    cout<<setw(2)<<i+1<<". month"<<months[i]<<endl;
cout<<"ur total is "<<total<<endl;
}
int main()
{

salary s;

s.set_salary();
s.print();


    return 0;
}
