// #include<bits/stdc++.h>
// #define      endl            '\n'
// #define      yes             "YES"
// #define      no              "NO"
// #define      ll              long long
// #define      pb              push_back
// #define      pii             pair <int,int>
// #define      pll             pair <long long,long long>
// #define      rev(a)          reverse(a, a+n);
// #define      Srev(s)         reverse(s.begin(), s.end());
// #define      sz(s)           s.size()
// #define      gcd(a,b)        __gcd(a,b)
// #define      lcm(a,b)        (a*b)/gcd(a,b)
// #define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// int main()
// {
//     fastIO;             // took help from masud_abdullah's code //

//     int test;
//     cin >> test;

//     while(test--){
//         ll n, i, sum = 0;
//         cin >> n;
//         ll a[n+5];

//         for(i=0; i<n; i++){
//             cin >> a[i];
//         }

//         sort(a, a+n);

//         bool flag = true;

//         for(i=0; i<n; i++){
//             if(a[i] < 0){
//                 flag = false;
//                 break;
//             }
//         }

//         if(flag){
//             for(i=0; i<n; i++){
//                 sum += a[i];
//             }
//             cout << sum << endl;
//         }

//         else{

//             for(i=0; i<n-1; i++){

//                 if(a[i]<0 && a[i+1]<0){
//                     a[i] *= -1;
//                     a[i+1] *= -1;
//                 }

//                 else if(a[i]<0 && a[i+1]>=0 && abs(a[i]) > a[i+1]){
//                     a[i] *= -1;
//                     a[i+1] *= -1;

//                 }
                
//                 else if(a[i]>=0 && a[i+1]<0 && abs(a[i+1])>a[i]){
//                     a[i] *= -1;
//                     a[i+1] *= -1; 
//                 }
//             }

//             for(i=0; i<n; i++){
//                 sum += a[i];
//             }

//             cout << sum << endl;
//         }

//     }


//     return 0;
// }

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
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, i, sum = 0;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        bool flag = true;

        for(i=0; i<n; i++){
            if(a[i] < 0){
                flag = false;
                break;
            }
        }

        if(flag){
            for(i=0; i<n; i++){
                sum += a[i];
            }
            cout << sum << endl;
        }

        else{

            for(i=0; i<n-1; i++){

                if(a[i]<0 && a[i+1]<0){
                    a[i] = abs(a[i]);
                    a[i+1] = abs(a[i+1]);
                }

                else if(a[i]<0 && a[i+1]>=0){
                    if( (a[i+1]) < abs(a[i]) ){
                        a[i] = a[i]*(-1);
                        a[i+1] = a[i+1]*(-1);
                    }
                }
                
                else if(a[i+1]<0 && a[i]>=0){
                    if( (a[i]) < abs(a[i+1]) ){
                        a[i+1] = a[i+1]*(-1);
                        a[i] = a[i]*(-1);
                    }
                }

            }

            for(i=0; i<n; i++){
                sum += a[i];
            }

            cout << sum << endl;
        }

    }


    return 0;
}