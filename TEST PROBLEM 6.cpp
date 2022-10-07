#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n;
    k=10;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        k--;
    }
}


