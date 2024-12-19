#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;

    int stk = 0;

    for (int x = 0; x < s.size(); x++)
    {
        if (stk && s[x] == 'B')
        {
            stk--;
        }
        else
        {
            stk++;
        }
    }

    cout << stk << endl;
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
