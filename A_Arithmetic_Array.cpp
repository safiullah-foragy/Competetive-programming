#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, k;
    cin >> n;

    map<int, int> mp;
    vector<int> v(n);
    int sum = 0;

    for (auto &i : v)

    {

        cin >> i;
        sum += i;
    }

    if (n == sum)
    {
        cout << "0" << endl;
    }

    else if (sum < n)
    {
        cout << "1" << endl;
    }

    else
    {
        cout << sum - n << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
