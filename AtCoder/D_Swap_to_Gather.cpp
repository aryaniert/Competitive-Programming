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
    int n ;
    cin>>n;
    string s;
    cin>>s;
    int cnt1 = 0;
    int cnt = 0;
    int ln = n-1;
    ll ans = 0;
    for(auto c:s) if(c=='1') {cnt1++;}
    for(int i = 0 ; i<n ;i++){
        if(s[i]=='1') cnt++;
        else{
           ans += min(cnt,cnt1-cnt);
        }
    }
    cout<<ans<<endl;
    return 0;
}