#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void asquare() {
    ll n;
    cin >> n;
    vll arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 2; i++) {
        if (arr[i] == 0) continue;
        else if (arr[i] < 0) {
            cout << "NO\n";
            return;
        } else {
            arr[i + 1] -= 2 * arr[i];
            arr[i + 2] -= arr[i];
        }
    }
    if (arr[n - 2] == 0 && arr[n - 1] == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        asquare();
    }
    return 0;
}
