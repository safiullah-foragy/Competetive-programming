#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll x;
    cin >> x;

    // Compute y = x ^ (x - 1)
    ll y = x ^ (x - 1);

    // Ensure y < x
    if (y >= x) {
        cout << -1 << endl;
        return;
    }

    // Compute x XOR y
    ll xor_val = x ^ y;

    // Check triangle inequalities
    if (x + y > xor_val && x + xor_val > y && y + xor_val > x) {
        cout << y << endl;
    } else {
        cout << -1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}