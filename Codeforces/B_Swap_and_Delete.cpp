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
        string s;
        cin>>s;
        int z = 0; 
        int o = 0; 
        int n = s.size();
        for(int i = 0 ;  i < n ; i++){
            if(s[i]=='0') z++;
            else o++;
        }
        int t = 0;
        for(int i = 0 ; i<n ;i++){
            if(s[i]=='0') o--;
            else z--;
            if(o==0 || z==0) t=i+1;
        }
        cout<<n-t<<endl;
    }
    return 0;
}