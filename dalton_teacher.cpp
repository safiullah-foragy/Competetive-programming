#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll diff = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == i + 1)
            {
                diff++;
            }
        }
        if (diff & 1)
        {
            diff = diff / 2 + 1;
        }
        else
        {
            diff = diff / 2;
        }
        cout << diff << nline;
    }
    return 0;
}
