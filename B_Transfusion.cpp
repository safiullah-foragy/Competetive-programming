#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n;
    cin >> n;

    vector<int> v(n + 1);
    ll sum1 = 0, sum2 = 0, sum3 = 0,even=0,odd=0;;
    
    
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        sum3 += v[i];
        if (i % 2 == 0) {
            sum2 += v[i]; even++;
        } else {
            sum1 += v[i]; odd++;
        }
    }

    
    if (sum1 % odd == 0 && sum2 % even == 0 && sum3 % n == 0 && sum1/odd == sum2/even && sum2/even == sum3/n) {
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
