#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int maxx = max(a,b);
    int diff = 6-maxx+1;

    if(diff == 1) cout << "1/6" << endl;
    else if(diff == 2) cout << "1/3" << endl;
    else if(diff == 3) cout << "1/2" << endl;
    else if(diff == 4) cout << "2/3" << endl;
    else if(diff == 5) cout << "5/6" << endl;
    else if(diff == 6) cout << "1/1" << endl;

    return 0;
}


/*
#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
    fio;                /// asif_abdullah ///

    int a,b;
    cin >> a >>b;

    int mx = max(a,b);

    int numerator = 6-mx+1;
    int dominator = 6;

    if(dominator%numerator==0) cout << numerator/numerator<<"/"<< dominator/numerator<< endl;
    else if(dominator%2==0 && numerator%2==0) cout << numerator/2<<"/"<< dominator/2<< endl;
    else cout << numerator << "/"<< dominator<< endl;

    return 0;
}



*/