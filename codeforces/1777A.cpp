/* Author: TheRockHead 
   Problem: https://codeforces.com/problemset/problem/1777/A
*/

#include <bits/stdc++.h>
using namespace std;

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
      for (int i=0; i<n; i++) {
         cin >> v[i];
      }
      int op = 0;
      stack<int> st;

      if (n == 1) cout << 0 << '\n';
      else {
         
         st.push(v[0]);

         // idea is 
         // compare v[i] with the top
         // if both are odd or both are even
         // then check, pop and push
         // this worked in the end :)) sup
         
         for (int i = 1; i < n; i++) {
            if (st.top() % 2 == 0 && v[i] % 2 == 0) {
               int temp = st.top() * v[i];
               st.pop();
               st.push(temp);
               op++;
            }
            else if (st.top() % 2 != 0 && v[i] % 2 != 0) {
               int temp = st.top() * v[i];
               st.pop();
               st.push(temp);
               op++;
            }
            else {
               st.pop();
               st.push(v[i]);
            }
         }
         cout << op << endl;
      // cout << "stack size" << st.size() << endl;
      // cout << endl;
      }


   }

   return 0;
}

