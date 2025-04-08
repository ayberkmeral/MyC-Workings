#include <iostream>
const int IDLE=0;
const int INUSE=1;

class cls2;

using namespace std;

class  cls1{
friend bool is_idle(cls1,cls2);

public:
    void set_status(int);

private:
    int status;
};

class cls2{
friend bool is_idle(cls1,cls2);
public:
    void set_status(int);
private:
    int status;
};

void cls1::set_status(int state){
    status=state;
}
void cls2::set_status(int state){
status=state;
}

bool is_idle(cls1 x1,cls2 x2){
if(x1.status||x2.status)
    return false;
else
    return true;
}

int main()
{
 cls1 obj1;
 cls2 obj2;

    obj1.set_status(IDLE);
    obj2.set_status(IDLE);

    if(is_idle(obj1,obj2))
        cout<<"screen can be used"<<endl;
    else
        cout<<"it is in use"<<endl;

    obj1.set_status(INUSE);
    obj2.set_status(INUSE);

    if(is_idle(obj1,obj2))
        cout<<"screen can be used"<<endl;
    else
        cout<<"it is in use"<<endl;

    return 0;
}
