#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    ll a, b;
    cin >> a >> b;
    if (b == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        ll sum = (a * b * 2);
        ll y = sum - a;
        cout << a << " " << y << " " << sum << endl;
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
