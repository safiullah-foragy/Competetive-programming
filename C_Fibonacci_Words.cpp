#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;
  if(s.size()<=2){cout<<"YES"<<endl;return;}
    int count = 0;
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (((s[i] - 64) + (s[i + 1] - 64) == (s[i + 2] - 64 + 1)) || ((s[i] - 64) + (s[i + 1] - 64) == (s[i + 2] - 64 + 27)))
        {
            count++;
        }
    }

    bool ok = false;

    if (count == s.size() - 2)
    {
        ok = true;
    }

    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
