#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int mn = 100, mx = -1; // taking safe bounds
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mn = min(mn, a);
        mx = max(mx, a);
    }
    
    // final answer logic: max - min + 1
    cout << mx - mn + 1 << '\n';
}

int main() {
    // optimize standard I/O operations for speed
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}