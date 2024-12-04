#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, k;
    cin >> n >> k;

    ll hour = 0;
    ll covered = 1; 
    while (covered < n) {
        if (covered < k) {
      
            covered *= 2;
            hour++;
        } else {
           
            hour += (n - covered + k - 1) / k;
            break;
        }
    }

    cout << hour << endl;
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
