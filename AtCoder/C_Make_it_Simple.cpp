#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pll pair<ll,ll>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vpl vector<pll>
#define um unordered_map<ll,ll>
#define om map<ll,ll>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) x.begin(), x.end()

int main() {
    // int t = 1;
    // cin>>t;
    // while( t-- ) {
        int N, M;
        cin >> N >> M;

        unordered_map<int, unordered_set<int>> adj;
        int removeCount = 0;
        for (int i = 0; i < M; i++) {
            int u, v;
            cin >> u >> v;

            if (u == v) {
                removeCount++;
                continue;
            }
            if (adj[u].count(v)) {
                removeCount++;
            } else {
                adj[u].insert(v);
                adj[v].insert(u);
            }
        }
        cout << removeCount <<endl;
    // }
    return 0;
}