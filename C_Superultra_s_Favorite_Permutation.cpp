#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    
    
        ll n;
        cin >> n;

        vector<ll> res;
         if (n<5) 
        {
            cout << -1 << endl;
        } 
        else 
        {
           for (int i = 2; i <= n; i += 2) 
            {
                if(i==4)
                continue;
                res.push_back(i);
            }
            res.push_back(4);
            res.push_back(5);
            
            for(int i = 1; i <= n; i += 2) 
            {
               if(i==5)
               continue;
               res.push_back(i);
            }
            
        for (ll x : res) 
        {
            cout << x << " ";
        }
        cout << endl;
        }
    }

 

    //    2  3  1  5   


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
