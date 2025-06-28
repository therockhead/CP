## Sublime Text Snippet
```cpp
// file name: cp-template.sublime-snippet
<snippet>
	<content><![CDATA[
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INF_LL = 1e18;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while (t--) {
    $1
  }
  return 0;
}
]]></content>
	<tabTrigger>cp</tabTrigger>
</snippet>

```

## VS code snippet
```json
// file name: cp-template.code-snippets
{
  "Competitive Programming Template": {
    "prefix": "cp",
    "body": [
      "#include <bits/stdc++.h>",
      "",
      "using namespace std;",
      "",
      "#define ll long long",
      "#define ld long double",
      "#define pb push_back",
      "#define mp make_pair",
      "#define F first",
      "#define S second",
      "#define all(x) x.begin(), x.end()",
      "#define rall(x) x.rbegin(), x.rend()",
      "#define rep(i, a, b) for (int i = a; i < b; i++)",
      "#define rrep(i, a, b) for (int i = a; i <= b; i++)",
      "const int MOD = 1e9 + 7;",
      "const int INF = 1e9;",
      "const ll INF_LL = 1e18;",
      "",
      "",
      "int main() {",
      "  ios_base::sync_with_stdio(false);",
      "  cin.tie(NULL);",
      "",
      "  int t = 1;",
      "  // cin >> t;",
      "  while (t--) {",
      "    $1",
      "  }",
      "  return 0;",
      "}"
    ],
    "description": "C++ template for competitive programming"
  }
}
```
## Binary Search
```cpp

// vector<int> v        -> contains the sorted array
// vector<int> queries  -> contains the nums to search
for (int i = 0; i < k; i++) {
    int target = queries[i];

    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;

    bool found = false;
    while(start <= end) {
      if (target > v[mid]) {
        start = mid +1;
        mid = (start + end)/2;
      }
      else if (target < v[mid]) {
        end = mid-1;
        start = start;
        mid = (start + end)/2;
      }
      else if (target == v[mid]) {
        cout << "YES" << endl;
        found = true;
        break;
      }
    }
    if(!found) {
      cout << "NO" << endl;
    }
}
```


## Reverse a string

```cpp
std::string str = "Hello, C++!";
std::cout << "Original string: " << str << std::endl;

// Reverse the string using std::reverse
std::reverse(str.begin(), str.end());

std::cout << "Reversed string: " << str << std::endl;
```
## Max element from vector

```cpp
vector<int> numbers; 
int maxNumber = max_element(numbers.begin(), numbers.end()); // O(n)
```

## Properties of XOR

```
(a ^ a) = 0
(0 ^ a) = a
commutative (a ^ b = b ^ a),
associative (a ^ (b ^ c) = (a ^ b) ^ c)
```