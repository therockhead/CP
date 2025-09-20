#include <bits/stdc++.h>
using namespace std;

#define sharingan ios::sync_with_stdio(false); cin.tie(nullptr)
using ll = long long;
ll n, t;
vector<ll> v;
long long f(long long x) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) continue; // guard against division by zero
        sum += min(x / v[i], (ll)1e9);
        if (sum >= t) return sum; // small optimization
    }
    return sum;
}
int main() {
    sharingan;
    cin >> n >> t;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll l = 1, r = 1e18, ans = 1e18;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (f(mid) >= t) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}
