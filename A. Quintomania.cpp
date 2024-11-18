#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    bool ok = true;

    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (i != 0 && (abs(v[i] - v[i - 1]) != 5 && abs(v[i] - v[i - 1]) != 7)) {
            ok = false;
        }
    }

    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
