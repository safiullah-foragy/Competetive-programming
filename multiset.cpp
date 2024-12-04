#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
    
    multiset<int>s;
    s.insert(10);
     s.insert(10);
      s.insert(20);
       s.insert(5);
for(auto it=s.begin();it!=s.end();it++)
    
  cout<<*it<<" ";
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
