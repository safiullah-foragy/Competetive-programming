#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to compute the XOR of two binary strings using their indices
int computeXOR(int x, int y) {
    return x ^ y;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    // Step 1: Convert binary string to integer representation for each prefix
    vector<int> prefixXOR(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefixXOR[i + 1] = (prefixXOR[i] << 1) | (s[i] - '0');
    }

    int maxXOR = INT_MIN;
    tuple<int, int, int, int> bestPair;

    // Step 2: Try all pairs of substrings
    for (int l1 = 0; l1 < n; ++l1) {
        for (int r1 = l1 + 1; r1 <= n; ++r1) {
            for (int l2 = 0; l2 < n; ++l2) {
                for (int r2 = l2 + 1; r2 <= n; ++r2) {
                    int xorValue = computeXOR(prefixXOR[r1] ^ prefixXOR[l1], prefixXOR[r2] ^ prefixXOR[l2]);
                    if (xorValue > maxXOR) {
                        maxXOR = xorValue;
                        bestPair = {l1 + 1, r1, l2 + 1, r2};
                    }
                }
            }
        }
    }

    // Step 3: Output the best pair with the maximum XOR value
    auto [l1, r1, l2, r2] = bestPair;
    cout << l1 << " " << r1 << " " << l2 << " " << r2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
