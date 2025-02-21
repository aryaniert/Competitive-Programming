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
    int t = 1;
    cin>>t;
    while( t-- ) {
        int n ;
        cin>>n;
        int m = n;
        int ans = 0;
        int cnt = 0;
        unordered_map<int,int> mp;
        unordered_map<int,int> mp1;
        int curr = -1;
        while(n--){
          int c;
          cin>>c;
          if(c==curr) cnt++;
          else{
            mp[curr] = max(mp[curr],cnt);
            cnt = 1;
          }
          curr = c;
        }
        mp[curr] = max(mp[curr],cnt);
        cnt = 0;
        curr =-1;
        while(m--){
          int c;
          cin>>c;
          if(c==curr) cnt++;
          else{
            mp1[curr] = max(mp1[curr],cnt);
            ans = max(ans,mp[curr]+mp1[curr]);
            cnt = 1;
          }
          curr = c;
        }
        mp1[curr] = max(mp1[curr],cnt);
        ans = max(ans,mp[curr]+mp1[curr]);
        cout<<ans<<endl;
    }
    return 0;
}