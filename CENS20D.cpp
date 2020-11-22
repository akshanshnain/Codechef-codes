#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t , n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll i  = 0, j = n - 1 , count = 0;
        for(int i = 0; i < n;i++){
            for(int j = i+ 1; j < n; j++){
                if((a[i] & a[j]) == a[i]){
                    count ++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}