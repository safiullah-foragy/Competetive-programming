#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    string sd = "";  // Stores diagonal elements
    string s = "";   // Stores non-diagonal elements

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
            if (i == j || j == n - 1 - i) {
                // Add to diagonal set
                sd += v[i][j];
            } else {
                // Add to non-diagonal set
                s += v[i][j];
            }
        }
    }

    // Use sets to count unique characters
    set<char> un(s.begin(), s.end());
    set<char> und(sd.begin(), sd.end());

    // Conditions for "YES":
    // 1. All non-diagonal characters are the same (un.size() == 1).
    // 2. All diagonal characters are the same (und.size() == 1).
    // 3. The diagonal character and non-diagonal character are different.
    if (un.size() == 1 && und.size() == 1 && *un.begin() != *und.begin()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
