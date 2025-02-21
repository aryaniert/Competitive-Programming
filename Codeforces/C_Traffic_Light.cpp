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
        char c;
        cin>>c;
        string s;
        cin>>s;
        s = s+s;
        int lasti = -1;
        int ans = 0; 
        for(int i = 2*n - 1 ; i>= n ; i--){
            if(s[i]=='g') lasti = i;
        }
        for(int i = n - 1 ; i>=0 ;i--){
            if(s[i]=='g') lasti = i;
            else if(s[i]==c){
                ans = max(ans,lasti-i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}