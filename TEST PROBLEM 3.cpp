#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string find_Min_Window(string str,string txt);
int main()
{
    string str,txt,ans;
    getline(cin,str);
    getline(cin,txt);
    ans=find_Min_Window(str,txt);
    cout<<ans;
}
string find_Min_Window(string str,string txt)
{
    int m[256]={0};
    int a=INT_MAX;
    int start =0;
    int count=0;
    
    for(int i=0;i<txt.length();i++)
    {
        if(m[txt[i]]==0)
        count++;
        m[txt[i]]++;
    }
    
    int i=0;
    int j=0;
    
    while(j<str.length())
    {
        m[str[j]]--;
        if(m[str[j]]==0)
        count--;
        if(count==0)
        {
        while(count==0)
        {
            if(a>j-i+1)
            {
                a=min(a,j-i+1);
                start=i;
            }
            m[str[i]]++;
            if(m[str[i]]>0)
            count++;
            
            i++;
        }
        }
        j++;
    }
    if(a!=INT_MAX)
    return str.substr(start,a);
    else
    return "-1";
}


