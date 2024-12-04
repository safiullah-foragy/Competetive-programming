#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    int ans = 0;
   float uniq = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second == 1) { 
            uniq++;
        } else { 
            ans++;
        }
    }

    
    ans += 2 * ceil(uniq / 2); 

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
