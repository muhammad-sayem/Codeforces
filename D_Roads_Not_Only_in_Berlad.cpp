// Concept from Module 18 (5 and 6) //

#include<bits/stdc++.h>
#define  pb  push_back
using namespace std;

int parent[1005];
int parentLevel[1005];

void dsu_set(int n){
    for(int i=1; i<=n; i++){
        parent[i] = -1;
        parentLevel[i] = 0;
    }
}

int findLeader(int node){
    while(parent[node] != -1){
        node = parent[node];
    }
    return node;
}

void dsu_union(int a, int b){
    int leaderA = findLeader(a);
    int leaderB = findLeader(b);

    if(leaderA != leaderB){

        if(parentLevel[leaderA] > parentLevel[leaderB]){
            parent[leaderB] = leaderA; 
        }

        else if(parentLevel[leaderB] > parentLevel[leaderA]){
            parent[leaderA] = leaderB; 
        }
        else{
            parent[leaderB] = leaderA; 
            parentLevel[leaderA]++;
        }
    }
}

int main()
{
    int n, i;
    cin >> n;
    dsu_set(n);
    int e = n-1;
    int cycleCnt = 0;
    vector<pair<int, int>> vv;

    while(e--){
        int a, b;
        cin >> a >> b;
        int leaderA = findLeader(a);
        int leaderB = findLeader(b);
        if(leaderA == leaderB){
            cycleCnt++;
            vv.pb({a,b});
        }
        else{
            dsu_union(a, b);
        }
    }
    
    vector<int> v;
    set<int> s;

    for(i=1; i<=n; i++){
        int leader = findLeader(i);
        s.insert(leader);
    }

    vector<int> vec;
    vector<pair<int, int>> vvv;

    if(s.size() == 1) cout << 0 << endl;
    else{
        cout << cycleCnt << endl;

        for(auto it = s.begin(); it != s.end(); it++){
            vec.pb(*it); 
        }

        for(i=0; i<vec.size(); i++){
            vvv.pb({vec[i], vec[i+1]});
        }

        for(i=0; i<vec.size()-1; i++){
            cout << vv[i].first << " " << vv[i].second << " ";
            cout << vvv[i].first << " " << vvv[i].second << endl;
        }
    }

    return 0;
}

// ---------------------------------------------------------------------- //

/*
#include<bits/stdc++.h>
#define  pb  push_back
using namespace std;

int parent[1005];
int parentLevel[1005];

void dsu_set(int n){
    for(int i=1; i<=n; i++){
        parent[i] = -1;
        parentLevel[i] = 0;
    }
}

int findLeader(int node){
    while(parent[node] != -1){
        node = parent[node];
    }
    return node;
}

void dsu_union(int a, int b){
    int leaderA = findLeader(a);
    int leaderB = findLeader(b);

    if(leaderA != leaderB){

        if(parentLevel[leaderA] > parentLevel[leaderB]){
            parent[leaderB] = leaderA; 
        }

        else if(parentLevel[leaderB] > parentLevel[leaderA]){
            parent[leaderA] = leaderB; 
        }
        else{
            parent[leaderB] = leaderA; 
            parentLevel[leaderA]++;
        }
    }
}

int main()
{
    int n, i;
    cin >> n;
    dsu_set(n);
    int e = n-1;
    int cycleCnt = 0;
    vector<pair<int, int>> vec;

    while(e--){
        int a, b;
        cin >> a >> b;
        int leaderA = findLeader(a);
        int leaderB = findLeader(b);
        if(leaderA == leaderB){
            cycleCnt++;
            vec.pb({a,b});
            // cout << "Cycle detected between: " << a << " " << b << endl;
        }
        else{
            dsu_union(a, b);
        }
    }
    
    vector<int> v;
    set<int> s;

    for(i=1; i<=n; i++){
        int leader = findLeader(i);
        s.insert(leader);
    }

    vector<int> vv;
    vector<pair<int, int>> vvv;

    if(s.size() == 1) cout << 0 << endl;
    else{
        cout << cycleCnt << endl;

        for(auto it = s.begin(); it != s.end(); it++){
            vv.pb(*it); 
        }

        for(i=0; i<vv.size(); i++){
            vvv.pb({vv[i], vv[i+1]});
        }

        for(i=0; i<vv.size()-1; i++){
            cout << vec[i].first << " " << vec[i].second << " ";
            cout << vvv[i].first << " " << vvv[i].second << endl;
        }
    }

    // cout << "Components: " << s.size() << endl;
    // cout << "Cycles: " << cycleCnt << endl;

    // for(i=1; i<=n; i++){
    //     cout << parent[i] << " "; 
    // }

    return 0;
}


*/