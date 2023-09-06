
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
deque<ll>v;
map<ll,ll>m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll a,b,n,mx,mn,ans,k;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }

    ans=n;
    for(i=0; i<n-1; i++)
    {
        a=v.front();
        v.pop_front();
        b=v.front();
        v.pop_front();
        mx=max(a,b);
        mn=min(a,b);
        m[mx]++;
        if(m[mx]==k)
        {
            ans=mx;
            break;
        }
        v.pf(mx);
        v.pb(mn);

    }
    cout<<ans;
    return 0;

}

