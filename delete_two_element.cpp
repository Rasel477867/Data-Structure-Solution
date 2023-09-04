
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
map<ll,ll>m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    ll t,n,a,ans;
     double c,b,sum;
    ll key;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        m.clear();
        sum=0.0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            m[a]++;
            v.pb(a);
            sum+=a;
        }
        b=n;

        c=(sum/b)*2.0;
        key=c;

        if(key==c)
        {
            ans=0;
            for(i=0; i<n; i++)
            {
                a=key-v[i];
                if(a<0)
                    continue;
                else{
                    if(m[a]==0)
                        continue;
                    else if(v[i]==a)
                    {
                        ans+=m[a]-1;
                        m[a]--;
                    }
                    else{
                        ans+=m[a];
                        m[v[i]]--;
                    }
                }
            }
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;

}

