#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
       ll n;
       cin >> n;
       ll *arr = new ll[n];
       for(ll i = 0; i < n; i++){
           cin >> arr[i];
       }
       
       ll maxN = 0;
       ll maxIndex = 0;
       for(ll i = 0; i < n; i++){
           
               maxN = max(maxN , arr[i]);
               maxIndex = i;
           
       }
       ll worst = maxN - maxIndex;
       if(worst < 0){
           worst = 1;
       }
       ll minN = arr[0];
       ll minIndex = 0;
       for(ll i = 0; i < n; i++){
           minN = min(minN , arr[i]);
           minIndex = i;
       }
       ll best = minN - minIndex;
       if(best < 0){
           best = 1;
       }
    cout << best << " " << worst << "\n";
}
}