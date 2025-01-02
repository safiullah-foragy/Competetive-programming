#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll max(ll n) {
    if (n <= 3) return 1;  
    return 2 * max(n / 4);  
}

void solve() {
    ll n;
    cin >> n;
   
    cout << max(n) << endl;
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
