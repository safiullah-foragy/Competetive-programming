#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> g(n);
        for (int i = 0; i < n; i++)
            cin >> g[i];

        bool triangle = false;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (g[i][j] == '1')
                    cnt++;
            }
            if (cnt == 1)
                triangle = true;
            else if (cnt > 1)
                break;
        }
        reverse(g.begin(), g.end());
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (g[i][j] == '1')
                    cnt++;
            }
            if (cnt == 1)
                triangle = true;
            else if (cnt > 1)
                break;
        }
        if (triangle)
            cout << "TRIANGLE" << endl;
        else
            cout << "SQUARE" << endl;
    }
    return 0;
}
