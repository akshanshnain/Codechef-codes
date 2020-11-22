#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    
int cases;
cin >> cases ;
while (cases--)
{
int n ;
cin >> n;
set<int> count;
for (int t = 0; t < n; t++)
{

int num;
cin >> num;
if (num != 0){
count.insert(num);
}
}
cout << count.size() << "\n" ;
}
}

