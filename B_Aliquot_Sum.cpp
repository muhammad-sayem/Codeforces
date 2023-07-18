#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

const int N = 1e6+5;
ll sum[N];

void sumUsingSieve(){
    for(int i=1; i<=N; i++){
        for(int j=i+i; j<N; j += i){
            sum[j] += i; 
        }
    }
}


int main()
{
    fastIO;

    sumUsingSieve();

    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        if(sum[n] > n) cout << "abundant" << endl;
        else if(sum[n] < n) cout << "deficient" << endl;
        else cout << "perfect" << endl;
    }

    return 0;
}
