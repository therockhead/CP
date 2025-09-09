/**
*    author:  TheRockHead
*    created: 09.09.2025 1:27:50
**/
 
#include <bits/stdc++.h>
 
using namespace std;
#define pb push_back
#define MAX 1e9+7
 
int main()
{
 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; i++) {
         cin >> v[i];
      }
      bool f1 = false;
      for (int i = 1; i < n-1; i++) {
        if (v[i-1] < v[i] && v[i+1] < v[i]){
          cout << "YES\n";
          cout << i-1+1 << ' ' << i+1 << ' ' << i+1+1 <<'\n';
          f1 = true;
          break;
            
         }
      }
      if (!f1) {
         cout << "NO\n";
      }
   }
   return 0;
}
