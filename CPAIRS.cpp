#include<bits/stdc++.h>
#define ll long long
#define fast     ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    fast;
        ll t,x;
        cin>>t;
        while(t--)
        {
                 cin>>x;
                ll arr[x];
                ll ans=0;
                for(ll i=0;i<x;i++)
                {
                        cin>>arr[i];
                }

                ll odd=0;
                for(ll i=x-1;i>=0;i--)
                {
                        if(arr[i]%2!=0)
                        {
                               odd=odd+1;
                        }
                        if(arr[i]%2==0)
                        {
                                ans=ans+odd;
                        }
                }
                
                cout<<ans<<"\n";
       }
       
return 0;
}
                
                                
                                