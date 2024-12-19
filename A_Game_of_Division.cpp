#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x] += y;
    }
    sort(v.rbegin(), v.rend());
    for (auto &i : mp)
    {
        v.push_back(i.second);
    }
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
