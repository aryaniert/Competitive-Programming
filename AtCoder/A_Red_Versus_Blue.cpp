#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, r, b;
    cin >> n >> r >> b;

    int groupSize = r / (b + 1);  // Minimum R count in each group
    int extra = r % (b + 1);      // Some groups get 1 extra R

    string result = "";
    for (int i = 0; i < b + 1; i++) {
        result.append(groupSize + (i < extra ? 1 : 0), 'R');  // Append Rs
        if (i < b) result.push_back('B');  // Append B (except last group)
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
