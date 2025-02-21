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

struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first)
            return a.second > b.second;  // If health is the same, prefer smaller index
        return a.first < b.first;  // Higher health has priority
    }
};

int main() {
    int t = 1;
    cin>>t;
    while( t-- ) {
        int a,b;
        cin>>a>>b;
        vector<int> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
        for(int i = 0 ; i<a ;i++){
            int c ;
            cin>>c;
            if(c%b==0)pq.push({b,i+1});
            else pq.push({c%b,i+1});
        }

        while(!pq.empty()){
            auto t = pq.top();
            pq.pop();
            if(t.first-b <= 0) 
              ans.push_back(t.second);
            else 
             pq.push({(t.first-b),t.second});
        }
        
        for(auto e:ans){
            cout<<e<<" ";
        }
        cout<<endl;

    }
    return 0;
}