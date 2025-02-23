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
        int n,x,a;
        cin>>n>>x;
        int ans =0;
        int l = -1;
        int r = INT_MAX;
        for(int i = 0 ; i<n ;i++){
           cin>>a;
           if(a+x<l || a-x>r){
            ans++;
            l = a-x;
            r = a+x;
           }else{
            l = max(l,a-x);
            r = min(r,a+x);
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}