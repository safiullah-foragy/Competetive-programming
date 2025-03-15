#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n;
    cin >> n;
    cout << (3 * (n / 15) + min(n % 15 + 1, 3ll)) << endl;
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