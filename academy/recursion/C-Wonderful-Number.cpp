#include<iostream>
using namespace std;


int main()
{
    int num;
    cin>>num;
    if(num % 2 == 0){
        cout<<"NO"<<endl;
        return 0;
    }
    int index = 0;
    int b[100];

    while(num != 0){
        b[index] = num%2;
        num = num/2;
        index++;
    }
    for(int i =0, z=  index-1; i<index, z>=0; i++,z--){
            if(b[i] != b[z]){
                cout<<"NO"<<endl;
                return 0;
            }
    }

    cout<<"YES"<<endl;

}
