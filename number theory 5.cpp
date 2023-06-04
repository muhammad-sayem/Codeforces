#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the value of n: ";
    int n, i, cnt = 0;
    cin >> n;

    for(i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            int cnt = 0;
                while(n%i == 0){
                    cnt++;
                    n /= i;
                }
                cout << i << "^" << cnt << ",";
        }
    }

    if(n>1) cout << n << "^" << 1 << endl;
    else cout << endl;

    return 0;
}
