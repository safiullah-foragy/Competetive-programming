#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    if(n%(a+b+c)==0){cout<<3*((n)/(a+b+c))<<endl;return;}
    ll distance = a + b + c;

   
    ll cycles = n / distance;

  
    ll d = cycles * distance;

   
    if (d + a >= n) {
        cout << cycles * 3 + 1 << endl; 
    } else if (d + a + b >= n) {
        cout << cycles * 3 + 2 << endl; 
    } else {
        cout << cycles * 3 + 3 << endl; 
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
