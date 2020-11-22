#include <bits/stdc++.h>
#define ll long long
using namespace std;
void adj(int **arr , int n){
    for(int i = 0 ; i < n ;  i++){
        for(int j = 0 ; j < n; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        int **arr = new int*[n];
	for(int i = 0; i < n; i++) {
		arr[i] = new int[n];
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}	
	}
        int count = 0;
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < n ; j++){
                if(arr[i][j] < arr[i + 1][j + 1]){
                    count ++;
                }
                else if(arr[i][j] > arr[i + 1][j + 1])
                {
                    adj(arr , count);
                }
                
            }
        }
        cout << count << "\n";
    }
}