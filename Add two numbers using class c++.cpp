#include <iostream>
using namespace std;
void getdata();
void logic();
class add
{
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"Enter the values"<<endl;
        cin>>a>>b;
    }
    void logic()
    {
        c=a+b;
        cout<<c;
    }
};
int main()
{
    add p;
    p.getdata();
    p.logic();
}


