#include <bits/stdc++.h>
using namespace std;

#define getsuga ios::sync_with_stdio(false); 
#define tensho cin.tie(nullptr);
using ll = long long;

long long generate(int a, int b) {
  return a + rand() % (b - a + 1);
}
int generate(int a) {
  return rand() % a;
}

// generate array with non-unique elements (can be similar)
vector<int> non_unique(ll n, int range) {
  vector<int> pool, final;
  for (int i = 0; i < n; i++) {
    pool.push_back(generate(1, range));
  }
  int pool_size = pool.size();
  for (int i = 0; i < n; i++) {
    final.push_back(pool[generate(0, pool_size-1)]);
  }
  sort(final.begin(), final.end());
  return final;
}

int main(int argc, char *argv[]) {
  srand(atoi(argv[1]));
  freopen("input.txt", "w", stdout);
  
  
  
  puts("");
  return 0;
}