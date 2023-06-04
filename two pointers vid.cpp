#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[i];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a,a+n);

    for(i=n-1; i>=0; i--){
        int x = a[i];

        int l = 0;
        int r = i-1;

        while(l<r){
            int sum = a[l] + a[r];

            if(sum == x) {
                cout << x << " " << a[l] << " " << a[r] << endl;
            }

            if(sum > x) r--;
            else l++;
        }
    }



    return 0;
}
