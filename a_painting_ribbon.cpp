
#include <bits/stdc++.h>
using namespace std;

void solve()

 {

int n,m,k;
cin>>n>>m>>k;
int remain=(n/m);
if(n%m>0){remain+=1;}

if(n-remain>k){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;

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
