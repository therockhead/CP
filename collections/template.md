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


## Max element from vector

```cpp
vector<int> numbers; 
int maxNumber = max_element(numbers.begin(), numbers.end()); // O(n)
```