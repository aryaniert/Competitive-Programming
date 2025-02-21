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
        int n; 
        cin>>n;
        int ans = 1;
        for(int i = 2 ; i*i <= n ;i++){
            if(n%i==0){
               ans = n/i;
               break;
            }
        }
        cout<<ans<<" "<<n-ans<<endl;
    }
    return 0;
}