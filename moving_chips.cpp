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
    int f = -1, l = 0, count = 0; // Initialize count variable
    vector<int> v(n); // Specify the size of the vector

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      if (v[i] == 1 && f == -1)
      {
        f = i;
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (v[n - 1 - i] == 1 && l == 0)
      {
        l = n - 1 - i;
      }
    }

    for (int j = f; j <= l; j++)
    {
      if (v[j] == 0)
      {
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
