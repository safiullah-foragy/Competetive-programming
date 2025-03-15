#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{

    int x, y;

    cin >> x >> y;
    if ( (x + 1)>=y&&((x+1-y)% 9 == 0))
    {
        cout << "Yes" << endl;
        return;
    }

    
   

    else
    {
        cout << "No" << endl;
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
