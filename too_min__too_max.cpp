#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        cout << 2 * (v[n - 1] - v[0]) + 2 * (v[n - 2] - v[1]) << endl;
  }
  return 0;
}