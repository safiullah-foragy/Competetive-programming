#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        s += to_string(x);
    }

    string ss = "101";
    if (s.find(ss) != string::npos)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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