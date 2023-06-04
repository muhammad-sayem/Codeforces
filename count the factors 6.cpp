#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, i, ans = 0;
    cin >> n;
    int number = n;

    for(i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            ans++;
            while(n%i == 0){
                n /= i;
            }
        }
    }
    if(n>1) ans++;
    cout <<  number << " : " << ans << endl;

    return 0;
}
