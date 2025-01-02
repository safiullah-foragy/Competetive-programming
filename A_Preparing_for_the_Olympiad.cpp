#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 


void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &it : a){
        cin >> it;
    }
    for(auto &it : b){
        cin >> it;
    }
    ll m = 0, s = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i] > b[i + 1]){
            m += a[i];
            s += b[i + 1];
        }
    }
    m += a[n - 1];
    cout << abs(m - s) << endl;
    }

    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
