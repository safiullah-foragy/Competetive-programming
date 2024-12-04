#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
   ll x,y;
   cin>>x>>y;

   if(x>=y){cout<<"YES"<<endl;return;}
    if(x==2&&y>3){cout<<"NO"<<endl;return;}

   if(x==1||x==3&&x!=y){cout<<"NO"<<endl;return;}

   else cout<<"YES"<<endl;

  
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
