#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    int n;
    cin >> n;

    for (int x = 0; x < 20; x++) {
        if (n % 11 == 0) {
            cout << "YES"<<endl;
            return;
        }
        n -= 111;
        if (n < 0) break;
    }
    cout << "NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
