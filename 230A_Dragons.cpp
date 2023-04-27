#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int s, n, i, flag = 0;
    cin >> s >> n;

    pair<int, int> a[1000];

    for(i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a+n);       

    for(i=0; i<n; i++){
        if(s<=a[i].first){
            flag = 1;
            break;
        }
        else{
            s = s+a[i].second;
        }
    }

    if(flag == 0) cout << yes << endl;
    else cout << no << endl;

    return 0;
}




