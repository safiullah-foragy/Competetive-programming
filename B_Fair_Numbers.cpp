#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll LCM(ll k, ll l) {
    return l * k / gcd(l, k);
}

void solve() {
    ll n;
    cin >> n;
    
    while (true) {
        ll m = n;
        vector<int> v;
        
        while (m > 0) {
            if (m % 10 != 0) v.push_back(m % 10);
            m /= 10;
        }

        ll lcm = v[0];
        for (auto &i : v) {
            lcm = LCM(lcm, i);
        }

        if (n % lcm == 0) {
            cout << n << endl;
            return;
        }
        
        n++; // Increment to check the next number
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
