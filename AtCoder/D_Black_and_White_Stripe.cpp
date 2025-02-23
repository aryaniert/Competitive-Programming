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
        int n,b;
        cin>>n>>b;
        string s; 
        cin>>s;
        int cw = 0,cb =0;
        int ans = INT_MAX;
        for(int i = 0 ; i<b ;i++){
           if(s[i]=='W') cw++;
           else cb++;
        }
        ans = min(cw,ans);
        for(int i = b ; i<n ;i++){
           if(s[i]=='W'){
            if(s[i-b]=='B'){ cb--; cw++;}
           }
           if(s[i]=='B'){
            if(s[i-b]=='W'){ cw--; cb++;}
           }
          ans = min(cw,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}