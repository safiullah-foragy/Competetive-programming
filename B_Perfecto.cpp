#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool perfectsquare(ll x)
{
    ll m = sqrt(x);
    return (m * m == x);
}

void solve()
{
    ll n;
    cin >> n;

    set<int> st;
    vector<int> v(n);
    vector<int> v1;

    ll sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (perfectsquare(sum1 + v[j]) == false && st.count(v[j]) == 0)
            {
                st.insert(v[j]);
                sum1 += v[j];
                v1.push_back(v[j]);

                break;
            }
        }
    }

    if (v1.size() == n)
    {
        for (auto &i : v1)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
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
