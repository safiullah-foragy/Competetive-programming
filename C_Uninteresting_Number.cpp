#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    string s;
    cin >> s;
    
    int two = 0, three = 0;
    int sum = 0;
    
   
    for (auto& i : s) {
        int digit = i - '0';  
        sum += digit;
        if (digit == 2) {
            two++;
        }
        if (digit == 3) {
            three++;
        }
    }
    
    
    if (sum % 9 == 0) {
        cout << "YES" << endl;
        return;
    }

    
    two = min(two, 8);
    three = min(three, 8);
    
    
    for (int i = 1; i <= three; i++) {
        if (((i * (3 * 3 - 3)) + sum) % 9 == 0) {
            cout << "YES" << endl;
            return;
        }
    }

    
    for (int i = 1; i <= two; i++) {
        if (((i * (2 * 2 - 2)) + sum) % 9 == 0) {
            cout << "YES" << endl;
            return;
        }
    }

    
    for (int i = 1; i <= two; i++) {
        for (int j = 1; j <= three; j++) {
            if (((i * (2 * 2 - 2)) + sum + (j * (3 * 3 - 3))) % 9 == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    
    cout << "NO" << endl;
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
