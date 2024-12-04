#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
       int n;
        cin >> n;
        int ar[n + 1];  
        for (int i = 1; i <= n; i++) {
            cin >> ar[i];
        }

        ll ans = 0;
        for (int i = 2; i <= n; i++) {
            int z = i + i - 1;
            if (ar[i] > z) continue;
            int x = (z % ar[i] + 1);
            int y = i - x;
            while (y >= 1) {
                if (y + i == ar[i] * ar[y]) ans++;
                y -= ar[i];
            }
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
