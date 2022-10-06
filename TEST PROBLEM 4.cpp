#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int min_adj_diff(vector<int> a,int n,int k);
int main()
{
    int n,k,ans;
    cin>>n;
    int v;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);
    }
    cin>>k;
    ans=min_adj_diff(a,n,k);
    cout<<ans;
}
int min_adj_diff(vector<int> a,int n,int k)
{
    int minDiff=INT_MAX;
    for(int i=0;i<(1<<n);i++)
    {
        int cnt=__builtin_popcount(i);
        if(cnt==n-k)
        {
            vector<int> temp;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j))!=0)
                temp.push_back(a[j]);
            }
            int maxDiff=INT_MIN;
            for(int j=0;j<temp.size()-1;j++)
            {
                maxDiff=max(maxDiff,temp[j+1]-temp[j]);
            }
            minDiff=min(minDiff,maxDiff);
            
        }
    }
    return minDiff;
}

