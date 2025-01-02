#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    int c1, c2;
    if (n % 3 == 0)
    {
        c1 = n / 3;
        c2 = c1;
    }

    else
    {
        c1 = n / 3;
            c2 = c1;
        if(n%3==2)   { c2 ++ ;}

        else c1++;

       
       
    }

    cout << c1<<" "<<c2<<endl;
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
