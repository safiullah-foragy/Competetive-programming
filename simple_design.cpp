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
        int64_t x, y;
        int k;
        cin >> x >> k;
        
        while (true)
        {
            y = x;
            int sum = 0;
            while (y > 0)
            {
                sum += y % 10;
                y = y / 10;
            }
            if (sum % k == 0)
            {
                cout << x << endl;
                break;
            }
            x++;
        }
    }
    
    return 0;
}