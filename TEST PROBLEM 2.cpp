#include<bits/stdc++.h>
#include<iostream>

using namespace std;
string getMaxstring(string s);
int main()
{
    
    string str;
    string ans;
    getline(cin,str);
    ans=getMaxstring(str);
    cout<<ans;
}
string getMaxstring(string s)
{
    int l=s.length();
    int i=0;
    int crlen=0;
    int maxlen=0;
    int st=-1;
    while(i<l)
    {
        if(s[i]==' ')
        {
            if(crlen%2==0)
            {
                if(maxlen<crlen)
                {
                    maxlen=crlen;
                    st=i-crlen;
                }
            }
            crlen=0;
        }
        else
        {
            crlen++;
        }
        i++;
    }
    if(crlen%2==0)
    {
        if(maxlen<crlen)
        {
            maxlen=crlen;
            st=i-crlen;
        }
    }
    if(st==-1)
    {
        return "-1";
    }
    return s.substr(st,maxlen);
}



