#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        set<int> st;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            st.insert(a[i]);
        }

      
        int valu = -1;
        for (int i = 1; i <= n; i++) {
            if (st.find(i) == st.end()) {
                valu = i;
                break;
            }
        }

        
        for (int i = 0; i < n; i++) {
            if (st.find(a[i]) != st.end()) {
                cout << a[i] << " ";
                st.erase(a[i]);
            }
        }

        
        for (int i = 0; i < n -2- st.size(); i++) {
            cout << valu << " ";
        }

        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
