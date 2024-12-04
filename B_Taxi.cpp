#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int a = 0, b = 0, c = 0, d = 0; // Counters for group sizes 1, 2, 3, and 4.

    // Count the number of groups of each size.
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) a++;
        else if (v[i] == 2) b++;
        else if (v[i] == 3) c++;
        else d++;
    }

    int ans = d; // Groups of size 4 require one taxi each.
    
    // Groups of size 3 can pair with size 1.
    ans += c;
    a = max(0, a - c); // Adjust remaining size 1 groups.

    // Groups of size 2 can pair together.
    ans += b / 2;
    if (b % 2 != 0) {
        ans += 1; // One taxi for the leftover group of size 2.
        a = max(0, a - 2); // Pair the leftover group of size 2 with up to two size 1 groups.
    }

    // Remaining size 1 groups can share taxis (4 per taxi).
    ans += (a + 3) / 4; // Divide remaining size 1 groups into groups of 4.

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
