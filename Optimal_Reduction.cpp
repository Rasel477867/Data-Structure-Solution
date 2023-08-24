
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define pf push_front
const ll mod=1e9+7;
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j;
    ll a,b,c,ans,mx,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        stack<ll>s;
        cin>>a;
        s.push(a);
        mx=a;
        ans=a;
        for(i=1; i<n; i++)
        {
            cin>>a;
            mx=max(a,mx);
            if(a>s.top())
            {
                ans+=a-s.top();
                s.push(a);
            }
            else
                s.push(a);
        }

        if(ans<=mx)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;

}
