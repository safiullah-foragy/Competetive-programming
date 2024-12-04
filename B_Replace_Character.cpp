#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    vector<char> v(n);
    map<char, int> mp;

    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    
    int maxx = 0, minn = INT_MAX;
    char cmx, cmn;
    for (auto it : mp) {
        if (it.second > maxx) {
            maxx = it.second;
            cmx = it.first;
        }
        if (it.second < minn) {
            minn = it.second;
            cmn = it.first;
        }
    }

    
    if (minn == maxx) {
        for (int i = 0; i < n - 1; i++) {
            if (v[i] != v[i + 1]) {
                v[i] = v[i + 1]; 
                break;
            }
        }
    } else {
       
        for (int i = 0; i < n; i++) {
            if (v[i] == cmn) {
                v[i] = cmx; 
                break;
            }
        }
    }

    
    for (char c : v) {
        cout << c;
    }
    cout << endl;
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
