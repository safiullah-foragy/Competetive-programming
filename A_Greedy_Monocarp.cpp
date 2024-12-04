#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());

    ll sum = 0;
    int i = 0;
    while (i < n && sum + v[i] <= k)
    {
        sum += v[i];
        i++;
    }

    cout << k - sum << endl;
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
