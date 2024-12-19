#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, L;
        cin >> n >> m >> L;

        vector<tuple<int, int, int>> EV;

        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            EV.emplace_back(a, b, 1);
        }

        for (int i = 0; i < m; ++i) {
            int a, b;
            cin >> a >> b;
            EV.emplace_back(a, b, 0);
        }

        sort(EV.begin(), EV.end());

        int k = 1;
        priority_queue<int> pwr;
        bool possible = true;

        for (const auto &[a, b, t] : EV) {
            if (t == 0) {
                pwr.push(-b); // Push negative to mimic Python's min-heap
            } else {
                while (!pwr.empty() && k < b - a + 2) {
                    k -= pwr.top();
                    pwr.pop();
                }

                if (k < b - a + 2) {
                    cout << -1 << '\n';
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << m - pwr.size() << '\n';
        }
    }

    return 0;
}
