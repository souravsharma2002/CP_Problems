#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count=0;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='-'&&count!=0)
        {
            count--;
        }
        else if(s[i]=='+')
        {
            count++;
        }
    }
    cout<<count;
}