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
    int n,d;
    cin>>n>>d;
    vector<int> v;
    int t = n;
    while( t-- ) {
        int c;
        cin>>c;
        if(n==1 and c>d) return 1;
        if(n==1 and c<=d) return 0;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    int i = 0; 
    int j = n-1;
    int ans = 0;
    while(i<=j){
        if(v[j]>d){
            ans++;
        }
        else if(v[j]<=d){
          if(di %v[j]==0) += 1+ d/v[j];
          else i += d/v[j];
          if(i>j){
            cout<<ans;
            return 0;
           }
          ans++;
        }
        j--;
    }
    cout<<ans;
    return 0;
}