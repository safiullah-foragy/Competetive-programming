#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    map<int, int> mp;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int maxFreq = 0;
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        if (it->second >= maxFreq)
        {
            maxFreq = it->second;
        }
    }

    cout << maxFreq;

    return 0;
}
