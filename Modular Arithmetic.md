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
