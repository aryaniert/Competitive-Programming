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
        ll w,h;
        ll ans = 0;
        cin>>w>>h;
        for(int i = 0 ; i<4 ;i++){
            int c ;
            cin>>c;
            ll mi,ma;
            for(int j = 0 ; j<c ; j++){
                int d;
                cin>>d;
                if(j==0) mi = d;
                if(j==c-1) ma = d;
            }
            if(i<2)
            ans = max(ans,(ma-mi)*h);
            else
            ans = max(ans,(ma-mi)*w);
        }
        cout<<ans<<endl;
    }
    return 0;
}