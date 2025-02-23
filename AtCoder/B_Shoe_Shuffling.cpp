#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<int, vector<int>> mp; // Stores indices for each shoe size
    vector<int> s(n);
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        mp[s[i]].push_back(i);
    }
    
    vector<int> p(n); // To store the shuffled positions
    
    // Check validity: if any shoe size has only one student, print -1
    for (auto &entry : mp) {
        if (entry.second.size() == 1) {
            cout << -1 << endl;
            return;
        }
    }
    
    // Shuffle within each group
    for (auto &entry : mp) {
        vector<int> &indices = entry.second;
        int m = indices.size();
        
        for (int i = 0; i < m; i++) {
            // Assign each student the next student's shoes in a circular manner
            p[indices[i]] = indices[(i + 1) % m] + 1;
        }
    }
    
    // Print result
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
