## Modular Arithmetic
Tutorial: [Link Errichto]( https://www.youtube.com/watch?v=-OPohCQqi_E)

Modular arithmetic is a system of arithmetic for integers, where numbers "wrap around" when reaching a certain value, called the modulus. A real life example of modular arithmetic is the 12-hour clock. We start counting at 1, but when we reach 12, we wrap back to 1. In modular arithmetic, we call 12 the modulus. In this case, we say that 1 and 13 are congruent modulo 12, because they have the same remainder when divided by 12. We write 1≡13(mod12). Also, −1≡11(mod12), because −1+12=11. In modular arithmetic, we only care about the remainder when dividing by the modulus.

### Why ?
In competitive programming, in some problems, the result can become so big that it cannot be stored in a variable of any data type. For example, 10100 is a very big number. It cannot be stored in a variable of any data type. We can store it in a string and do some operations on it but that will not be efficient as the length of the number will be very big very fast. For example, adding two numbers of length n will take O(n) time.
So, doing operations become more challenging than solving the problem itself! In such cases, the problem asks to do modular arithmetic so that the operations can be done efficiently.
For example, let’s say a problem asks to find the value of 100!. But

100! = 933262154439441526816992388562667004907159682643816214685929638952175999932299156089414639

Which is huge! But if the problem asks to find the value of 100!(mod109+7), then we can do it easily as the result can be stored in a variable of int data type as
100!(mod109+7)=437918130.

### Properties
    • The value of a(modm) is always between 0 and m−1.
    • a≡b(modm) means that a and b have the same remainder when divided by m. That is a(modm)=b(modm).
    • (a+b)≡(a(mod m)+b(mod m))(mod m).
    • (a−b)≡(a(mod m)−b(mod m))(mod m).
    • (a⋅b)≡(a(mod m))⋅(b(mod m))(mod m).
    • ab≡(a(mod m))b(mod m).
    • a(mod m)=b(mod m)⇒(a−b)(mod m)=0. That is, if a and b have the same remainder when divided by m, then a−b is divisible by m.
    • We can also do divisions but we will learn about it later.


**Modular Arithmetic**
------------------------
**Formulas:**
```
1. (a+b) % M = ((a % M)+(b % M)) % M
2. (a*b) % M = ((a % M)*(b % M)) % M
3. (a-b) % M = ((a % M)-(b % M) + M) % M
4. (a/b) % M = ((a % M)*(b^-1) % M) % M  ***

```
-----> M = 10^9+7 = 1000000007 -> **very close to the integer maximum**
------ also used to calculate Multiplicative inverse


```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
  int a = 7;
  int b = 6;
  int m = 5;

  // Property: (a + b) mod m = ((a mod m) + (b mod m)) mod m
  int result1 = (a + b) % m;
  int result2 = ((a % m) + (b % m)) % m;
  cout << "(a + b) mod m = " << result1 << endl;
  cout << "((a mod m) + (b mod m)) mod m = " << result2 << endl;

  // Property: (a - b) mod m = ((a mod m) - (b mod m) + m) mod m
  int result3 = (a - b) % m;
  int result4 = ((a % m) - (b % m) + m) % m;
  cout << "(a - b) mod m = " << result3 << endl;
  cout << "((a mod m) - (b mod m) + m) mod m = " << result4 << endl;

  // Property: (a * b) mod m = ((a mod m) * (b mod m)) mod m
  int result5 = (a * b) % m;
  int result6 = ((a % m) * (b % m)) % m;
  cout << "(a * b) mod m = " << result5 << endl;
  cout << "((a mod m) * (b mod m)) mod m = " << result6 << endl;

  int c, d;
  // a * b * c * d mod m = (((a * b) mod m) * c mod m) * d mod m
  a = 1e9 - 3; b = 1e9 - 1; c = 1e9 - 2; d = 1e9 - 3; m = 1e9 + 7;
  int result7 = (a * b * c * d) % m; // overflow
  int result8 = (((a * b) % m) * c % m) * d % m; // still overflow
  int result9 = (((1LL * a * b) % m) * c % m) * d % m; // no overflow
  cout << "(a * b * c * d) mod m = " << result7 << ' ' << result8 << ' ' << result9 << endl;

  // a - 3 * b mod m = (a mod m - (3 * b) mod m + m) mod m
  cout << "(a - 3 * b) mod m = " << (a - 3LL * b % m + m) % m << endl;

  // find n! mod m
  int n = 100;
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = (1LL * fact * i) % m;
  }
  cout << n << "! mod m = " << fact << endl;

  // find a^b mod m
  b = 100;
  int power = 1;
  for (int i = 1; i <= b; i++) {
    power = (1LL * power * a) % m;
  }
  cout << a << "^" << b << " mod m = " << power << endl;
  return 0;
}

// #include <bits/stdc++.h>
// #define ll long long
// #define pb push_back

// using namespace std;
// int main() {

  


//   // a^b % mod 
//   // 1 < a, m <= 10^9
//   // 1 < b <= 10^5 
//   // int a = 8, mod = 1e9 + 7, b = 15;
//   // int power = a % mod;
//   // for (int i = 1; i < b; i++) {
//   //   power = (1LL * power * a) % mod; 
//   // }
//   // cout << power << endl;






//   // n! mod m
//   // int n = 39;
//   // int fact = 1;
//   // int mod = 1e9 + 7;
//   // for (int i = 1; i <= n; i++) {
//   //   fact = (1LL * (fact) * i) % mod; 
//   // }
//   // cout << fact << '\n';





//   return 0;
// }
```