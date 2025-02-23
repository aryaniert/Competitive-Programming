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
        int p = 1;
        while (p * 2 <= n - 1) {
            p *= 2;
        }

        // Print numbers in descending order from p-1 to 0
        for (int i = p - 1; i >= 0; --i) {
            cout << i << " ";
        }
        
        // Print remaining numbers from p to n-1
        for (int i = p; i < n; ++i) {
            cout << i << " ";
        }
        cout << "\n";
        }
        return 0;
}