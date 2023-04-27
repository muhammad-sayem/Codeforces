#include<bits/stdc++.h>
#define  endl  '\n'
#define  fastIO  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    long long n, d, i, cnt = 0;
    cin >> n >> d;
    long long a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    for(i=1; i<n; i++){

        if(a[i] <= a[i-1]){
           long long diff = a[i-1]-a[i];

                int x = diff/d;
                int y = x+1;

                cnt += y;
                a[i] += y*d;

        }
        else continue;
    }

    cout << cnt << endl;


    return 0;
}
