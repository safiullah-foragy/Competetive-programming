#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k, p;
    cin >> n >> k >> p;
    ll max = p * n;
   
 
    if (abs(k) > max)
    {
        cout << "-1" << endl;return;
    }

     
        cout << (abs(k) / p) + (abs(k) % p != 0) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
