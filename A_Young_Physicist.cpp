#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    int n;
    cin >> n;

 
    vector<vector<int>> v(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }
    }

    bool ok = false;

   
    for (int col = 0; col < 3; col++) {
        int sum = 0;

        
        for (int row = 0; row < n; row++) {
            sum += v[row][col];
        }

        
        if (sum != 0) {
            ok = true;
            break;
        }
        if(ok){break;}
    }

    if (ok) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
