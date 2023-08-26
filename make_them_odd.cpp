
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
map<ll,ll>m;
map<ll,ll>::iterator it;
vector<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,ans,a;
    cin>>t;
    while(t--)
    {
        m.clear();
        v.clear();
        ans=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a%2==0)
             {
                 if(m[a]==0)
                    v.pb(a);
                 m[a]=1;

             }
        }
        sort(v.begin(),v.end());
        for(i=v.size()-1; i>=0; i--)
        {
            n=v[i];
            while(n%2==0)
            {
                n/=2;
                ans++;
                if(m[n]==1)
                    break;
            }
        }

  cout<<ans<<endl;

    }



    return 0;

}

