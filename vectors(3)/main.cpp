#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>v1;
    cout<<"is vector empty?"<<(v1.empty()?"Yes":"No")<<endl;
    cout<<"size= "<<v1.size()<<endl;
    cout<<"capacity="<<v1.capacity()<<endl;
    v1.push_back(0);

    for(int i=1;i<=5;i++)
        v1.push_back(i);
    cout<<"printing values"<<endl;

    for(unsigned int i=0;i<v1.size();i++)
        cout<<setw(2)<<v1[i];
    cout<<endl;

    cout<<"front item is "<<v1.front()<<endl;
    cout<<"last item is "<<v1.back()<<endl;

    v1.pop_back();

    for(vector<int>::iterator itr=v1.begin();itr!=v1.end();itr++)
        cout<<setw(2)<<*itr;
    cout<<endl;

    cout<<"size "<<v1.size()<<endl;
    cout<<"capacity "<<v1.capacity()<<endl;

    v1.clear();

cout<<"size "<<v1.size()<<endl;
    cout<<"capacity "<<v1.capacity()<<endl;

    v1.assign({1,2,3});

    vector<int>v2;

    v2.assign(v1.begin(),v1.end());



    vector<int>v3={1,2};
    v3.push_back(3);
    v3.push_back(4);

    for(size_t i=0;i<v3.size();i++)
        cout<<setw(2)<<v3[i];
    cout<<endl;

v3.clear();

v3={1,2,3,4,5};

for(unsigned int i=0;i<v3.size();i++)
    cout<<setw(2)<<v3[i];


 cout<<endl;
int& last_item=v3.back();
int& first_item=v3.front();

cout<<"last= "<<last_item<<"first= "<<first_item<<endl;

cout<<endl;

cout<<"printing values in reverse"<<endl;

for(vector<int>::reverse_iterator itr=v3.rbegin();itr!=v3.rend();itr++)
    cout<<setw(2)<<*itr;
cout<<endl;

vector<int>v4(3,10);

for(vector<int>::iterator itr=v4.begin();itr!=v4.end();itr++)
    cout<<setw(3)<<*itr;
cout<<endl;

v4.insert(v4.begin(),5);

for(vector<int>::iterator itr=v4.begin();itr!=v4.end();itr++)
    cout<<setw(3)<<*itr;

cout<<endl;
v4.insert(v4.end(),25);

for(vector<int>::iterator itr=v4.begin();itr!=v4.end();itr++)
    cout<<setw(3)<<*itr;
cout<<endl;

vector<int>::iterator itr=v4.begin();

v4.begin(itr+1,2,7);

for(unsigned int i=0;i!=v4.end();i++)
    cout<<setw(3)<<v4[i];
cout<<endl;
    return 0;
}
