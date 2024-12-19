#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    
    // Prefix XOR array to store XOR of the first i bits
    vector<int> prefixXor(n + 1, 0);
    
    // Compute prefix XOR for the string
    for (int i = 1; i <= n; ++i) {
        prefixXor[i] = prefixXor[i - 1] ^ (s[i - 1] - '0');
    }
    
    int maxXOR = -1;
    int l1 = -1, r1 = -1, l2 = -1, r2 = -1;
    
    // Try to find the maximum XOR value by checking different combinations
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            // Get XOR of substring s[i..j]
            int num1 = prefixXor[j] ^ prefixXor[i];
            
            for (int k = 0; k < n; ++k) {
                for (int l = k + 1; l <= n; ++l) {
                    // Get XOR of substring s[k..l]
                    int num2 = prefixXor[l] ^ prefixXor[k];
                    
                    // Calculate the XOR between num1 and num2
                    int xorValue = num1 ^ num2;
                    
                    // Update the answer if we found a larger XOR value
                    if (xorValue > maxXOR) {
                        maxXOR = xorValue;
                        l1 = i + 1;
                        r1 = j;
                        l2 = k + 1;
                        r2 = l;
                    }
                }
            }
        }
    }
    
    // Output the result: l2, r2 for the second substring and l1, r1 for the first
    cout << l2 << " " << r2 << " " << l1 << " " << r1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
