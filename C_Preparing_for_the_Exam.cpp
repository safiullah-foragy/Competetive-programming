#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(m), q(k);

    set<ll> s;
    for (ll i = 0; i < m; ++i)

    {
        cin >> a[i];
    }

    for (ll i = 0; i < k; ++i)
    {
        cin >> q[i];
        s.insert(q[i]);
    }

    if (k >= n)
    {
        for (int i = 0; i < m; i++)
        {
            cout << "1";
        }
        cout << endl;
        return;
    }

    if (k < n - 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout << "0";
        }
        cout << endl;
        return;
    }

    for (ll i = 0; i < m; ++i)
    {
        if (s.find(a[i]) == s.end())
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
