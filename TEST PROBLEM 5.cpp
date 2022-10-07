#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void countCurrency(int amount);
int main()
{
    int amount,ans;
    cin>>amount;
    countCurrency(amount);
    return 0;
}
void countCurrency(int amount)
{
    int notes[6]={1000,500,100,50,10,1};
    int notecounter[6]={0};
    int sum=0;
    for(int i=0;i<6;i++)
    {
        if(amount>=notes[i])
        {
            notecounter[i]=amount/notes[i];
            amount=amount%notes[i];
            sum=sum+notecounter[i];
        }
    }
    cout<<sum;
}


