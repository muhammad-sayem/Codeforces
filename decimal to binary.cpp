#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, rem;
    cout << "Enter the decimal value: ";
    cin >> n;
    string str;

    while(n!=0){
        rem = n%2;
        n /= 2;
        str.push_back(rem+'0');
    }

    reverse(str.begin(),str.end());
    cout << str;

    return 0;
}
