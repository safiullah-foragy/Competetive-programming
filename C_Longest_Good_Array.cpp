#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    double l, r;
    cin >> l >> r;

    // Use double precision for better accuracy
    double x = ((1 + sqrt(1 + 8 * (r - l))) ) / 2;
    
    double y = ceil(x);  // Use ceil to round up x
    
    // Calculate z
    double z = (0.5 * pow(y, 2)) - (0.5 * y) + l;

    int ans;
    // Check if z is within range
    if (z <= r) {
        ans = y;  // Valid solution
    } else {
        ans = y - 1;  // Adjust if z exceeds r
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
