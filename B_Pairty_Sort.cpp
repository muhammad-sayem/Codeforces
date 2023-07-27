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
int main()
{
    fastIO;             // Logic from: AlgoBot (Youtube Channel) //

    int test; cin >> test;

    while(test--){
        int n, i; cin >> n;
        int a[n+5];
        int b[n+5] = {0};
        vector<int> even;
        vector<int> odd;

        for(i=1; i<=n; i++){
            cin >> a[i];
            if(a[i]%2 != 0) b[i]++;
        }

        for(i=1; i<=n; i++){
            if(a[i]%2 == 0) even.pb(a[i]);
            if(a[i]%2 != 0) odd.pb(a[i]);
        }

        sort(even.begin(), even.end(), greater<int>());
        sort(odd.begin(), odd.end(), greater<int>());

        for(i=1; i<=n; i++){
            if(b[i] == 0){
                b[i] = even.back();
                even.pop_back();
            }
            
            else{
                b[i] = odd.back();
                odd.pop_back();
            }
        }

        bool flag = true;

        for(i=1; i<=n-1; i++){
            if(b[i] > b[i+1]){
                flag = false;
                break;
            }
        }

        if(flag) cout << yes << endl;
        else cout << no << endl;
    }

    return 0;
}

// ---------------------------------------------------------------------- //

/*
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
int main()
{
    fastIO;             // Logic from: AlgoBot (Youtube Channel) //

    int test; cin >> test;

    while(test--){
        int n, i; cin >> n;
        int a[n+5];
        int b[n+5] = {0};
        list<int> even;
        list<int> odd;

        for(i=1; i<=n; i++){
            cin >> a[i];
            if(a[i]%2 != 0) b[i]++;
        }

        for(i=1; i<=n; i++){
            if(a[i]%2 == 0) even.pb(a[i]);
            if(a[i]%2 != 0) odd.pb(a[i]);
        }

        even.sort();
        odd.sort();

        for(i=1; i<=n; i++){
            if(b[i] == 0){
                b[i] = even.front();
                even.pop_front();
            }
            
            else{
                b[i] = odd.front();
                odd.pop_front();
            }
        }

        bool flag = true;

        for(i=1; i<=n-1; i++){
            if(b[i] > b[i+1]){
                flag = false;
                break;
            }
        }

        if(flag) cout << yes << endl;
        else cout << no << endl;
    }

    return 0;
}
*/

// ---------------------------------------------------------------------------- //

/*
#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   sz(v)      (int)v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/// sort(a,a+n,greater<int>()); Descending sort
///sort(a,a+n); array sorting[0 base index]
///reverse(a,a+n); array reverse[0 base index]
///sort(s.begin(),s.end()); string sorting
///reverse(s.begin(),s.end()); string reverse
///int max_element = *max_element(a,a+n);[0 base index]
///int min_element = *min_element(a,a+n);[0 base index]
///int max_indx = max_element(a,a+n)-a;[0 base index]
///int min_indx = min_element(a,a+n)-a;[0 base index]
/// isalpha(charracter) ei function int value return (0,1,2) kore.jodi >0 value return kore taile charracter ta alphabet ar naile alphabet na.
///isalpha() 1 return korle charracter ta capital ar 2 return korle charracter ta small.
/// for converting string to integer: stoi(a); [a is the string ]
///Substring_Check:
///str1(main string)
///str2(substring)
///if((str1.find(str2) != string :: npos))yy;
///else nn;

///int a[n];
///iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int main()
{
    FIO;                // Masud_Abdullah //
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b,b+n);
        bool f=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0 && b[i]%2!=0)
            {
                f=false;
                break;
            }
            else if(a[i]%2!=0 && b[i]%2==0)
            {
                f=false;
                break;
            }
        }

        if(f)yy;
        else nn;
    }
    return 0;
}
*/




