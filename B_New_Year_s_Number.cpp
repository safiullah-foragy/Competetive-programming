#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
ll n;
cin>>n;
ll x=n/2000;

ll remainder=n%2000;
ll last=remainder%20;


if(last <=x){cout<<"YES"<<endl;}

else cout<<"NO"<<endl;

  
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
