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
        ll l ;
        cin>>l;
        ll mina = INT_MAX;
        ll minb = INT_MAX;
        ll sumb = 0;
        while(l--){
            vector<ll> v;
            ll n ;
            cin>>n;
            while(n--){
                ll d;
                cin>>d;
               v.push_back(d);
            }
            sort(v.begin(),v.end());
            sumb += v[1];
            mina = min(mina,v[0]);
            minb = min(minb,v[1]);
        }
        cout<<mina+sumb-minb<<endl;
    }
    return 0;
}