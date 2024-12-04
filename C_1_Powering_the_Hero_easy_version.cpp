#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
    int n;
    cin >> n;
    priority_queue<int>p;
    vector<int>v(n);
    for(auto&i:v)
    {cin>>i;}

    ll sum=0;

    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            if(p.size()>0)
            {
                sum+=p.top();
                p.pop();
            }
        }

        else
        {
            p.push(v[i]);
        }
    }

    cout<<sum<<endl;return;
  
    }

    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
