#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string repeatString(const string& str, int times) {
    string result;
    while (times--) result += str;
    return result;
}

void solve() {
    string s, t;
    cin >> s >> t;
    
    int n = s.length(), m = t.length();
    int gcdValue = __gcd(n, m);

    string repeatedS = repeatString(s, m / gcdValue);
    string repeatedT = repeatString(t, n / gcdValue);

    if (repeatedS == repeatedT)
        cout << repeatedS << endl;
    else
        cout << "-1" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
