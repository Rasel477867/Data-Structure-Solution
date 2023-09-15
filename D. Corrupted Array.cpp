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
vector<ll>v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    ll n,a,b,c;
    ll t,ans,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        ll y=0;
        v.clear();
        for(i=0; i<n+2; i++)
        {
            cin>>a;
            v.pb(a);
            sum+=a;
        }
        sort(v.begin(),v.end());
        b=sum-v[n]-v[n+1];
        if(b==v[n])
        {
            for(i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(i=0; i<=n; i++)
            {
                a=sum-v[i]-v[n+1];
                if(a==v[n+1])
                {
                    y=1;
                    ans=i;
                    break;
                }
            }
            if(y==0)
                cout<<-1<<endl;
            else{
                for(i=0; i<=n; i++)
                {
                    if(i==ans)
                        continue;
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;

}

