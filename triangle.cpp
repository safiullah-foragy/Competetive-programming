#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;

        long long int a[n];
        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            a[i] = 1LL << p; // Use bit manipulation for powers of 2
        }

        sort(a, a + n); 

        int count = 0;
        for (int i = 0; i < n - 2; i++) {
            int k = i + 2;
            for (int j = i + 1; j < n - 1; j++) {
                while (k < n && a[i] + a[j] > a[k]) {
                    k++;
                }
                count += k - j - 1;
            }
        }

        cout << count << endl;
    }

    return 0;
}
