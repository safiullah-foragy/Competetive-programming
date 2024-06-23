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
        int64_t a, b, k; 
        cin >> a >> b >> k;
        int64_t result = 0;

        if (k % 2 == 0)
        {
            result = (k / 2) * (a - b);
        }
        else
        {
            result = (k / 2) * (a - b) + a;
        }

        cout << result << endl; // Print the result or do whatever you need with it
    }

    return 0;
}
