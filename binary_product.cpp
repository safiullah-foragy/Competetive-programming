#include <iostream>
#include <vector>

using namespace std;

const int MAX = 100'007;
const int MOD = 1'000'000'007;

vector<int> binaryDecimals;

bool isBinary(int n) {
    if (n == 1) {
        return true;
    }
    bool ans = false;
    for (int i : binaryDecimals) {
        if (n % i == 0) {
            ans |= isBinary(n / i);
        }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    cout << (isBinary(n) ? "YES\n" : "NO\n");   
}

void generateBinaryDecimals() {
    for (int i = 2; i < MAX; i++) {
        int curr = i;
        bool bad = false;
        while (curr) {
            if (curr % 10 > 1) {
                bad = true;
                break;
            }
            curr /= 10;
        }
        if (!bad) {
            binaryDecimals.push_back(i);
        }
    }
}

int main() {
    generateBinaryDecimals();
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++) {
        solve();
    }
}
