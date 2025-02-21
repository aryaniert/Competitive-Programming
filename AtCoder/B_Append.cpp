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
    vector<int> v;
    while( t-- ) {
        int a,b;
        cin>>a>>b;
        if(a==1) v.push_back(b);
        if(a==2){
            int n = v.size();
            cout<<v[n-b]<<endl;
        }
    }
    return 0;
}