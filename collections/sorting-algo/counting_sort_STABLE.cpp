// 0 based
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int A[N], B[N], C[N];
int n, k;

void counting_sort() {
    for (int i = 0; i < n; i++)
        C[A[i]]++;

    for (int i = 1; i <= k; i++)
        C[i] += C[i - 1];

    for (int i = n-1; i >= 0; i--) {
        B[C[A[i]]-1] = A[i];
        C[A[i]]--;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    k = *max_element(A, A + n);
    counting_sort();
    for (int i = 0; i < n; i++) {
      cout << B[i] << ' ';
    }
    cout << '\n';
}
//----------------------------------------------------------------------
// 1- Based
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int A[N], B[N], C[N];
int n, k;

void counting_sort() {
    //for (int i = 1; i <= k; i++) C[i] = 0;
    for (int j = 1; j <= n; j++)
        C[A[j]]++;

    for (int i = 2; i <= k; i++)
        C[i] += C[i - 1];

    for (int j = n; j >= 1; j--) {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }

}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> A[i];
    k = *max_element(A + 1, A + n + 1);

    counting_sort();
    for (int i = 1; i <= n; i++)
        cout << B[i] << ' ';
    cout << '\n';
}
