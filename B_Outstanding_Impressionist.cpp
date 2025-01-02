#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> sum(2 * n + 1, 0), cnt(2 * n + 1, 0);
    
    vector<pair<int, int>> intervals(n);
    
    // Read the intervals and handle single-point intervals
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i].first >> intervals[i].second;
        if (intervals[i].first == intervals[i].second) {
            sum[intervals[i].first] = 1;
            cnt[intervals[i].first]++;
        }
    }

    // Prefix sum to calculate number of intervals covering each point
    for (int i = 1; i <= 2 * n; ++i) {
        sum[i] += sum[i - 1];
    }

    // Process each interval and output the result
    for (const auto& interval : intervals) {
        int l = interval.first, r = interval.second;
        if (l == r) {
            if (cnt[l] <= 1) {
                cout << "1";
            } else {
                cout << "0";
            }
        } else {
            if (sum[r] - sum[l - 1] < r - l + 1) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    int t; 
    cin >> t; 
    while (t--) solve();  // Solve each test case
    return 0;
}
