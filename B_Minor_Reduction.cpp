#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string ss;
    cin >> ss;

    int n = ss.size();
    vector<char> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = ss[i];
    }

    bool ok = false;

    for (int i = v.size() - 1; i > 0; i--)
    {
        if (((v[i] - '0') + (v[i - 1] - '0')) > 9)
        {
            int sum = ((v[i] - '0') + (v[i - 1] - '0'));
            string s1 = to_string(sum);
            v[i] = s1[1];
            v[i - 1] = s1[0];
            ok = true;
            break;
        }
    }

    if (ok)
    {
        for (auto &i : v)
        {
            cout << i;
        }
        cout << endl;
        return;
    }

    int sm = ((v[0] - '0') + (v[1] - '0'));
    string s2 = to_string(sm);
    v.erase(v.begin());
    v[0] = s2[0];

    for (auto &i : v)
    {
        cout << i;
    }
    cout << endl;
    return;
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
