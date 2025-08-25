#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    ll maxSum = -1e18;
    ll sum = -1e18;
    for (int i = 0; i < n; i++) {
        sum = max(v[i], v[i]+sum);
        maxSum = max(maxSum, sum);
 
    }
    cout << maxSum;
 
    return 0;
}
