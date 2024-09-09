#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int m;
    cin >> m;
    
    while (m--) {
        map<char, int> m1;
        map<int, char> m2;
        string s;
        cin >> s;
        
        if (s.length() != n) {
            cout << "NO" << endl;
            continue;
        }
        
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if (m1.find(s[j]) == m1.end() && m2.find(a[j]) == m2.end()) {
                m1[s[j]] = a[j];
                m2[a[j]] = s[j];
            } else if ((m1.find(s[j]) != m1.end() && m1[s[j]] != a[j]) || 
                       (m2.find(a[j]) != m2.end() && m2[a[j]] != s[j])) {
                ok = false;
                break;
            }
        }
        
        cout << (ok ? "YES" : "NO") << endl;
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
