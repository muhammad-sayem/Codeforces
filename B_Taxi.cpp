#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a = 0, b = 0, c = 0, d = 0, cnt = 0;
    cin >> n;

    for(i=0; i<n; i++){
        int x;
        cin >> x;

        if(x == 1) a++;
        if(x == 2) b++;
        if(x == 3) c++;
        if(x == 4) d++;
    }

    cnt += d;

    if(c<a){
        cnt += c;
        a = a-c;
        c =  0;
    }

    else if(c>=a){
        cnt += a;
        c = c-a;
        a = 0;
    }

    if(c>0){
        cnt += c;
        c = 0;
    }

    if(b>0){
        cnt += (b/2);
        b = b%2;
    }

    int left = a + (b*2);

    if(left > 0 && left <= 4){
        cnt += 1;
    }

    else if(left%4 != 0){
        cnt += (left/4)+1;
    }

    else cnt += (left/4);

    cout << cnt << endl;

    return 0;
}



