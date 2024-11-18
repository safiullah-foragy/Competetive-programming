#include <bits/stdc++.h>
using namespace std;


int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &i : v) {
        cin >> i;
    }

    
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        int b = v[i];
        if (b == 0) continue; 
        int target = (n - 2) / b;

        int m = binarySearch(v, target);
        if (m != -1 && v[m] * b == n - 2) { 
            cout << b << " " << v[m] << endl;
            return;
        }
    }

   
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
