#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // declaration 
  // bitset<const_value> name(num);
  bitset<8> bs(11); // 00001011
  cout << bs << '\n'; // 00001011

	bitset<32> bss(12);
	cout << bss << '\n'; // 00000000000000000000000000001100
	cout << bss[0] << '\n'; // 0
	cout << bss[1] << '\n'; // 0
	cout << bss[2] << '\n'; // 1
	// .....
	bitset<8> bsss("00101"); // 3 0s will be appended
	cout << bsss[0] << '\n'; // 1
	cout << bsss[1] << '\n'; // 0
	cout << bsss[2] << '\n'; // 1


	// set bit count
	bitset<8> x(156);
	cout << "x = " << x << '\n';
	cout << "set bits number in x: " << x.count() << '\n';
	cout << "unset bits number in x: " << 8 - x.count() << '\n';

	int n;

	// setting all bits
	bsss.set(); // all bits are set now
	cout << bsss << '\n'; //11111111

	// setting specific bit
	bitset<8> b(122);
	cout << "before setting:" <<  b << '\n'; //01111010
	n = 7;
	b.set(n);
	cout << "after setting " << n << "th bit: " << b << '\n';
	// 11111010



	// resetting all bits
	bsss.reset();
	cout << bsss << '\n'; //00000000


	// resetting specific bit
	bitset<8> c(98); // 11111010
	cout << "before setting:" <<  b << '\n'; //11111010
	n = 6;
	c.set(n);
	cout << "after setting " << n << "th bit: " << c << '\n';


	// flipping all bits
	bitset<8> bin(500);
	cout << bin << '\n'; // 11110100
	bin.flip();
	cout << bin << '\n'; // 00001011

	// flipping specific bit
	bitset<8> a(40);
	cout << a << '\n'; //00101000
	n = 3;
	// flip the 3rd bit
	a.flip(3); 
	cout << a << '\n'; //00100000


	// to_ullong() or decimal conversion
	bitset<8> z("100110");
	cout << z.to_ullong() << '\n'; // 38


	// make string from the binary num
	string s = z.to_string();
	cout << s << '\n'; //00100110



	// if there is at least 1 set bit,
	// it returns true (1), otherwise 0
	cout << z.any() << '\n'; // 1


	// if there is no set bit,
	// none() returns 1, or else 0
	cout << z.none() << '\n'; // 0


	// if all set bit, returns 1
	// or else 0
	cout << z.all() << '\n' << '\n';; // 0


	// some use cases
	bitset<10> p("11100101"), q("1010011");
	cout << "      P: " <<  p << '\n';
	cout << "     ~P: " << ~p << '\n';
	cout << "      Q: " <<  q << '\n';
	cout << "     ~Q: " << ~q << '\n';
	cout << '\n';
	
	cout << "      P: " <<  p << '\n';
	cout << "      Q: " <<  q << '\n';
	cout << "P OR Q : "  << (p | q) << '\n'; // p OR q
	cout << "P AND Q: " << (p & q) << '\n'; // p AND q
	cout << "     ~P: " << ~p << '\n';
	cout << "     ~Q: " << ~q << '\n';

	// We can perform <<, >> operations also.....





	return 0;
}