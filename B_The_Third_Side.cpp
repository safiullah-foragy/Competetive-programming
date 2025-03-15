#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    priority_queue<ll> pq; 

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        pq.push(x);
    }

    
    while (pq.size() > 1) {
        ll a = pq.top(); pq.pop(); 
        ll b = pq.top(); pq.pop(); 
        ll x = a + b - 1; 
        pq.push(x); 
    }

  
    cout << pq.top() << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}