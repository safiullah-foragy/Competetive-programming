#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
    int n;
    cin >> n;

    if(n==1){cout<<"1"<<endl;return;}
    int ans;
    for(int i=1;i<1e6;i++)
    {
if(n<=(6*i-2)){ans=i+1;break;}
    }

    cout<<ans<<endl;
  
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
