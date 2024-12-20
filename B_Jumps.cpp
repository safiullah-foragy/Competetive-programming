#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, k;
    cin >> n;
    k = n;
    double ans = -0.5 * (1 - sqrt(1 + 8 * n));
    double a1 = ceil(ans), a2 = floor(ans);
    int ans1 = (a1 * (a1 + 1)) / 2;
    if (a2 == ans)
    {
        cout << ans << endl;
        return;
    }
    int count = 0;
    int gap = ans1 - n;

    if (gap == 1)
    {
        cout << a1 + 1 << endl;
        return;
    }

    else
        cout << a1 << endl;
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
