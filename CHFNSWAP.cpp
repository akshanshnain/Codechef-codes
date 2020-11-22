#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = (n*(n + 1)) / 2;
        int msum = 0;
        int ans = 0;
        int i = 1;
        int j = n;
        for(; i <= n ; i++){
            msum += i;
            if(msum == sum / 2)
            {
                break;
            }
            else
            {
                swap(i , j);
                ans ++;
                j--;
            }
        }
        cout << ans << "\n";
    }
}