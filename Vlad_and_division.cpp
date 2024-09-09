#include <bits/stdc++.h>


using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    multiset<int> s;
    int cnt = 0;

    for (auto& el : a) {
        int x = ~el;   
        int u = ~(1 << 31);  
        x = x & u;

        if (s.find(x) != s.end()) {
            cnt++;
            s.erase(s.find(x));
        } else {
            s.insert(el);
        }
    }

    cout << s.size() + cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
