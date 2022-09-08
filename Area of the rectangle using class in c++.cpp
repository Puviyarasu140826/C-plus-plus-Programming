#include <iostream>
using namespace std;
void getdata();
int area();
class Rec
{
    int l,b,d;
    public:
    void getdata()
    {
        cout<<"Enter the values"<<endl;
        cin>>l>>b;
    }
    public:
    int area()
    {
        d=l*b;
        return d;
    }
};
int main()
{
    int a;
    Rec s;
    s.getdata();
    a=s.area();
    cout<<"Area of the rectangle is "<<a;
}




