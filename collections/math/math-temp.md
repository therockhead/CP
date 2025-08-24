Math Docs

### Logarithm Functions
----------------------------------------------------------------------------
log2() - 2 base log2
log10() - 10 base log


### Modular Arithmetic
----------------------------------------------------------------------------
    • The value of a(mod m) is always between 0 and m−1.
    • a ≡ b(mod m) means that a and b have the same remainder when divided by m. 
      That is a(mod m)=b(mod m).
    • (a+b)≡(a(mod m)+b(mod m))(mod m).
    • (a−b)≡(a(mod m)−b(mod m))(mod m).
    • (a⋅b)≡(a(mod m))⋅(b(mod m))(mod m).
    • ab≡(a(mod m))b(mod m).
    • a(mod m)=b(mod m)⇒(a−b)(mod m)=0. That is, if a and b have the same remainder when divided by m, then a−b is divisible by m.
→ Check Overflow
→ Modular Arithmetic Doesn’t work with bit-wise operators

### GCD
-----------------------------------------------------------------------------
```cpp
int a = 12, b = 18; 
int val = __gcd(a, b); // returns int
// time complexity: O(log(min(a,b))
```

### LCM
-----------------------------------------------------------------------------
```
a*b = LCM * GCD
therefore, lcm formula = (a*b)/__gcd(a,b)
```

### check if n has Odd Divisor
-----------------------------------------------------------------------------
```cpp
if (n & (n-1)) { // 1000 & 0111 = 0000
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
}
```

### Some built-in Functions
-----------------------------------------------------------------------------
**abs(value)**

If value < 0 or value > 0, abs(value) returns |value|

**ceil(), round(), floor()**

if the number is long long then use, llround()

**sqrt(), cbrt(), pow()**

** cbrt(val) returns the cubit root of ‘val’

**stoi() - String to integer

**char s[] = “234”;
```cpp
int x = stoi(s); // stores 234 as integer in x
cout << x << ‘\n’; // prints 234
```

**stoll() - String to Long Long**
```cpp
char s[] = ”121212121”;
long long a = stoll(s);
```

**to_string() - Converts int into string**

** doesn’t work with char[] string
** needs cpp string
```cpp
long long x = “121331312”;
string x_str = to_string(x);
```

**cerr <<**

**(used for debugging purpose
** gets ignored when submitted in the OJ
** doesn’t need to comment out
Example:
```cpp
int n; cin >> n; // n = 5
int sum = 0;
cerr << “value of n is: ” << n << ‘\n’;

for (int i = 0; i < n; i++) {
	sum += i;
	cerr << "sum when i = " << i << ", sum = " << sum;
}
cout << sum << '\n';

** Standard Output: 
15

** another output Stream for cerr:
value of n is: 5
sum when i = 0, sum = 0
sum when i = 1, sum = 1
sum when i = 2, sum = 3
sum when i = 3, sum = 6
sum when i = 4, sum = 10
```

**isalpha(char ch)**

checks if ch is alpha or not.

**isdigit(char ch)**

checks ch digit or not


**tolower(char ch)**

if the char is capital 'A' to 'Z', then it returns lower

**toupper(char ch)**
reverse operation of tolower(char ch)

Example:
```cpp
// sometimes if true, returns non-zero value instead of 1
  // in both case, it's true
  // if we use (bool) before the func, it will always give either 0 or 1

  cout << isalpha('A') << endl; // returns 1
  cout << isalpha('1') << endl; // returns 0

  cout << isdigit('A') << endl; // returns 0
  cout << isdigit('1') << endl; // returns 1

  cout << islower('a') << endl; // 1 
  cout << isupper('A') << endl; // 1 
  cout << (bool)isupper('A') << endl; // 1 
  cout << (bool)isupper('a') << endl; // 0 
 

  cout << tolower('A') << endl; // returns 97 (ASCII)
  cout << (char)tolower('A') << endl; // 'a'

  cout << toupper('a') << endl; // returns 65 (ASCII)
  cout << (char)toupper('a') << endl; // 'A'
```


**swap()**
```cpp
int a = 100, b = 200;
swap(a, b); cout << a << '\n'; // 200 
cout << b << '\n'; // 100

```

**rand()**

** returns a random number, but same in every run
```cpp
 cout << rand() << endl; // random num output
 ```

** so to get random values everytime we run-
	
 ```cpp
srand(time(0));
cout << rand() << endl;
```

**reverse(start, end) O(n)**
```cpp
int a[] = {1, 2, 3, 4, 5};
reverse(a, a+5); // reverse(arr+start, arr+end) where n is the size of the array
// O(n)
for (int i = 0; i < 5; i++) cout << a[i] << ' '; // 5 4 3 2 1

int a[] = {1, 2, 3, 4, 5};
reverse(a+1, a+4); // 1st index to (4-1)th index will be reversed
for (int i = 0; i < 5; i++) cout << a[i] << ' '; // 1 4 3 2 5 
```

**sort(start, end)**
** uses O(n logn)
```cpp
  int a[] = {7, 16, -1, 0, 23};
  sort(a, a+5); // O(n logn)
  for (int i = 0; i < 5; i++) cout << a[i] << ' '; // -1 0 7 16 23  
```

** reverse order sorting
	- sort() and then reverse()- simple :)

**is_sorted(start, end) -- returns true(1) if sorted, returns false(0) if not sorted

```cpp
int a[] = {7, 16, -1, 0, 23};
cout << is_sorted(a, a+n); // returns 0
sort(a, a+5); // O(n logn)
cout << is_sorted(a, a+n); // returns 1 

```
