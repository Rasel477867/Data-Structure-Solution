#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#define ll long long int
#define pb push_back
#include<bits/stdc++.h>
using namespace std;

vector<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n,i,a,b;
    ll ans=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        stack<ll>s2;
        stack<ll>s1;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(!s1.empty() && !s2.empty())
            {
                if(s1.top()>=s2.top())
                {
                    if(s2.top()>=a)
                    {
                        s2.push(a);
                    }
                    else if(s1.top()>=a)
                        s1.push(a);
                    else
                    {
                        ans++;
                        if(s2.top()>=s1.top())
                            s1.push(a);
                        else
                            s2.push(a);
                    }

                }
                else
                {
                    if(s1.top()>=a)
                    {
                        s1.push(a);
                    }
                    else if(s2.top()>=a)
                        s2.push(a);
                    else
                    {
                        ans++;
                        if(s1.top()>=s2.top())
                            s2.push(a);
                        else
                            s1.push(a);
                        }
                }
            }
            else if(s1.empty())
                s1.push(a);
            else if(s1.top()>=a)
                s1.push(a);
            else
                s2.push(a);
        }
        cout<<ans<<endl;
    }



    return 0;

}


