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
        ll a,b,c;
        cin>>a>>b>>c;
        ll ans = 0;
        ll cnt = 0;
        while(a--){
           ll d;
           cin>>d;
           if(d<=c){
             cnt++;
           }else{
            if(cnt>=b)
            ans += (cnt-b+1)*(cnt-b+2)/2;
            cnt=0;
           }
        }
        if(cnt>=b)
        ans += (cnt-b+1)*(cnt-b+2)/2;
        cout<<ans<<endl;
    }
    return 0;
}