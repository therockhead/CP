#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);
#define IO cin.tie(NULL);

const int N = 2e5 + 9;
int n, k;
long long arr[N];

bool ok(long long mid) {
    long long partition = 1;

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > mid) {
            partition += 1;
            sum = arr[i];
        }
    }

    return partition <= k;
}

int main() {
    fast IO
    
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // long long l = 0, r = 1e9;
    
    long long l = *max_element(arr, arr + n),
    r = accumulate(arr, arr + n, 0LL);
    // cerr << r << '\n';
    
    long long ans = 0;

    while (l <= r) {
        long long mid = l + (r - l)/2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << '\n';
    return 0;
}   
