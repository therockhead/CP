#include <iostream>
using namespace std;
 
int main()
{
 
    long long int n;
    cin >> n;
 
    long long int array[n];
 
    long long int sum = 0;
 
    for(long long int i = 0; i < n-1; i++){
        cin >> array[i];
        sum = sum+array[i];
    }
 
    cout << ((n*(n+1))/2)-sum <<endl;
    return 0;
 
}
