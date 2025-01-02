#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve() {
    int t; 
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n; 
        cin >> n;  // Length of the string s
        string s; 
        cin >> s;  // The string s
        
        // Sets of possible numbers for each part of the permutation
        vector<set<int>> possible(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= n; ++j) {
                possible[i].insert(j);
            }
        }
        
        // Process the string and ensure we meet the constraints for p and s
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'p') {
                // If s[i] == 'p', then the first i+1 elements must be a permutation of {1, 2, ..., i+1}
                for (int j = i + 1; j < n; ++j) {
                    for (int k = 1; k <= i + 1; ++k) {
                        possible[j].erase(k);
                    }
                }
            } else if (s[i] == 's') {
                // If s[i] == 's', then the last n-i elements must be a permutation of {i+1, ..., n}
                for (int j = 0; j <= i; ++j) {
                    for (int k = i + 1; k <= n; ++k) {
                        possible[j].erase(k);
                    }
                }
            }
        }
        
        // Now check if each index has a valid set left
        bool valid = true;
        for (const auto& p : possible) {
            if (p.empty()) {
                valid = false;
                break;
            }
        }
        
        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    solve();  // Call the solve function to process input/output
    return 0;
}
