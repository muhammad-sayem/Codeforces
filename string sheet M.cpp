#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i, h = 0, e = 0, l_1 = 0, l_2= 0, o = 0;

    for(i=0; i<str.size(); i++){
        if(str[i] == 'h') {
            h = i;
            break;
        }
    }

    for(i=h+1; i<str.size(); i++){
        if(str[i] == 'e'){
            e = i;
            break;
        }
    }

    for(i=e+1; i<str.size(); i++){
        if(str[i] == 'l'){
            l_1 = i;
            break;
        }
    }

    for(i=l_1+1; i<str.size(); i++){
        if(str[i] == 'l') {
            l_2 = i;
            break;
        }
    }

    for(i=l_2+1; i<str.size(); i++){
        if(str[i] == 'o'){
            o = i;
            break;
        }
    }

    if(h!=0 && e!=0 && l_1!=0 && l_2!=0 && o!= 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
