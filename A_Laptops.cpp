#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
   int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x != y) {
            cout << "Happy Alex" << endl;
            return ;
        }
    }
    cout << "Poor Alex" << endl;
    }

    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
