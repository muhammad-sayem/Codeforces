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

// int parent[100005];
// int parentSize[100005];
 
// void dsu_set(int n){
//     for(int i=1; i<=n; i++){
//         parent[i] = -1;
//         parentSize[i] = 1;
//     }
// }
 
// int findLeader(int node){
//     while(parent[node] != -1){
//         node = parent[node];
//     }
//     return node;
// }
 
// void dsu_union(int a, int b){
//     int leaderA = findLeader(a);
//     int leaderB = findLeader(b);
 
//     if(leaderA != leaderB){
 
//         if(parentSize[leaderA] > parentSize[leaderB]){
//             parent[leaderB] = leaderA; 
//             parentSize[leaderA] += parentSize[leaderB];
//         }
 
//         else{
//             parent[leaderA] = leaderB; 
//             parentSize[leaderB] += parentSize[leaderA];
//         }
//     }
// }
 
// int main()
// {
//     int n, e, i;
//     cin >> n >> e;
//     dsu_set(n);
 
//     while(e--){
//         int a, b;
//         cin >> a >> b;
 
//         dsu_union(a, b);
//     }
 
//     set<int> s;

//     // for(i=1; i<=n; i++){
//     //     int leader = findLeader(i);
//     //     cout << "Leader of " << i << ": " << leader << endl;
//     // }
 
//     for(i=1; i<=n; i++){
//         int leader = findLeader(i);
//         s.insert(leader);
//     }
 
//     vector<int> v;
 
//     for(auto it = s.begin(); it != s.end(); it++){
//         v.push_back(*it);
//     }

//     cout << "Leaders: " << endl;

//     for(int val: v){
//         cout << val << " ";
//     }
    
//     // cout << v.size()-1 << endl;
 
//     // for(i=0; i<v.size()-1; i++){
//     //     cout << v[i] << " " << v[i+1] << endl;
//     // }
 
//     return 0;
// }

// ------------------------------------------- //

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool visited[N];
int dist[N];
vector<int> v[N];

void dfs(int u, int &cnt){
    visited[u] = true;
    cnt++;

    for(int child: v[u]){
        if(visited[child] == false){
            dfs(child, cnt);
        }
    }
}

int main()
{
    int n, e, i, cnt;
    cin >> n >> e;
    vector<int> vec;

    while(e--){
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int connectedComponents = 0;

    for(i=1; i<=n; i++){
        if(visited[i] == false){
            connectedComponents++;
            vec.push_back(i);
            cnt = 0;
            dfs(i, cnt);
        }
    }

    cout << cnt << endl;

    // cout << "Number of connected components: " << connectedComponents << endl;
    
    // for(int val: vec){
    //     cout << val << " ";
    // }
    // cout << endl;

    // for(i=1; i<=n; i++){
    //     cout << dist[i] << " ";
    // }
    
    return 0;
}
