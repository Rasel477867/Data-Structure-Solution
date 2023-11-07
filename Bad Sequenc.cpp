#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#define ll long long int
#define pb push_back
#include<bits/stdc++.h>
using namespace std;

stack<char>st;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,ans=0;
    string s;
    cin>>n>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='(')
            st.push('(');
        else{
            if(!st.empty())
            {
                st.pop();
            }
            else
                ans++;
        }
    }
    ll c=0;
    while(!st.empty())
    {
        c++;
        st.pop();
    }
    if(ans==0 && c==0)
        cout<<"YES"<<endl;
    else if(ans==1 && c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;




    return 0;

}

