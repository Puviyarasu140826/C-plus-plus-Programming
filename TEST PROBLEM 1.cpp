#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int getDiv(int a[],int s);
int main()
{
    int n,i,s,ans;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    s=sizeof(arr)/sizeof(arr[0]);
    ans=getDiv(arr,s);
    cout<<ans;
    return 0;
}
int getDiv(int a[],int s)
{
    if(s==1)
    return (a[0]+1);
    int p[s],c[s];
    p[0]=a[0];
    for(int i=1;i<s;i++)
    {
        p[i]=__gcd(a[i],p[i-1]);
    }
    c[s-1]=a[s-1];
    for(int i=s-2;i>=0;i--)
    {
        c[i]=__gcd(c[i+1],a[i]);
    }
    for(int i=0;i<=s;i++)
    {
        int cr;
        if(i==0)
        cr=c[i+1];
        else if(i==s-1)
        cr=p[i-1];
        else
        cr=__gcd(p[i-1],c[i+1]);
        if(a[i]%cr!=0)
        return cr;
    }
    return 0;
}

