#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    int l, r, d, u;
    cin >> l >> r >> d >> u;
 ll s1= sqrt(l*l+u*u);
 ll s2= sqrt(r*r+u*u);
 ll s3= sqrt(r*r+d*d);
 ll s4= sqrt(l*l+d*d);


    
    if (l==r&&u==d&&l==u) {
        cout << "Yes"<<endl;
    } else {
        cout << "No"<<endl;
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
