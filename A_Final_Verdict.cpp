#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    cin >> v[i];

    int s = 0;
    for (int i = 0; i < n; i++) {s += v[i];}

    if (s % n != 0) {
        cout << "NO" << endl;
        return;
    }

    int t = s / n;
    if (t == x) cout << "YES" << endl;
    else cout << "NO" << endl;
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