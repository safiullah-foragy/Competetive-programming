
#include <bits/stdc++.h>
using namespace std;

void solve()

 {

int n, k;
        cin >> n >> k;
        k = min(k, 30);
        int p= pow(2, k) - 1;
        cout << min(n, p) + 1 << "\n";

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
