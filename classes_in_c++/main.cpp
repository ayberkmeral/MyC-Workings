#include <iostream>
#include <iomanip>

using namespace std;

class Time{
private:
    int hour,minute,second;
public:
    void settime(int h,int m,int s){
        if(h>=0&&h<=24)
            hour=h;
        else
            hour=0;
        if(m>=0&&m<=60)
            minute=m;
        else
            minute=0;
        if(s>=0&&s<=60)
            second=s;
        else
            second=0;
    }

void print_time(){
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second;
}
void print_standart(){
cout<<(hour>12?hour%12:hour)<<setfill('0')<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<(hour<12?" AM":"PM");

}

};

int main()
{

Time t;
t.settime(9,30,0);
t.print_standart();

cout<<endl;
Time t2;
t2.settime(23,69,30);
t2.print_time();

    return 0;
}
