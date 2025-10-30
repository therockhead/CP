#include <bits/stdc++.h>
using ll = long long;
using namespace std;

const int N = 1e5 + 9;

ll a[N], n, t[N];
ll b[N]; // aux arr

void Merge(ll l, ll mid, ll r)
{
    ll i = l, j = mid + 1;
    ll k = l;
    // assuming k is a pointer in b array
    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        }
        else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid) {
     for (ll m = j; m <= r; m++) {
            b[k] = a[m];
            k++;
      }
    }
    else {
        for (ll m = i; m <= mid; m++) {
            b[k] = a[m];
            k++;
        }
    }
    for (ll m = l; m <= r; m++) {
        a[m] = b[m];
    }
}

void MergeSort(ll l, ll r) {
    if (l < r) {
        ll mid = (l + r)/2;
        MergeSort(l, mid);
        MergeSort(mid + 1, r);
        Merge(l, mid, r);
    }
}

int main() {

  return 0;
