// Optimal Approach

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main() {
    // rearranged a bit
    // now I look for the abs value from before
    // no extra loop  

    int n; 
    cin >> n;
    vector<int> arr(n);
    
    int min_abs = INT_MAX;  
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        min_abs = min(min_abs, abs(arr[i]));
    }
    
    cout << min_abs << "\n";
    
    return 0;
}


/* !st Approach

#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;
int main() {
	int n; cin >> n;
	vector<int> arr(n);
	int minimum = 1e5;
    int pos_minimum = 1e5;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		minimum = min(minimum, arr[i]);
        if (arr[i] >= 0) {
            pos_minimum = min(pos_minimum, arr[i]);
        }
	}
    int cnt = 0;
	if (abs(minimum) >= pos_minimum) {
        for(int i = pos_minimum; i != 0; i--) {
            cnt++;
        }
    }
    else {
        for (int i = abs(minimum); i != 0; i--) {
            cnt++;
        }
    }

	cout << cnt << "\n";
	return 0;
}

/* my approach: 
		
		if I find the minimum number and count how many steps
		needed to make it 0 then it will be solved by decreasing to 0
		
		then again, I saw there can be negative numbers.
		so they can be also increased. 

		so I compared the absolute value of neg minimum
		with the positive minimum I get

		then whichever was small. I used that one to get my count

*/
