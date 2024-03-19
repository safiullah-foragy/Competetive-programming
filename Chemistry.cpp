#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> charCount;

        for (int i = 0; i < n; i++) {
            charCount[s[i]]++;
        }

        int even = 0;
        for (auto it = charCount.begin(); it != charCount.end(); ++it) {
            if (it->second % 2 != 0) {
                even++;
                if (even - 1 > k) {
                    cout << "NO" << endl;
                    break;
                }
            }
        }

        if (even - 1 <= k) {
            cout << "YES" << endl;
        }
    }

    return 0;
}
