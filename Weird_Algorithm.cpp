
#include<bits/stdc++.h>
using namespace std;

void solve()

 {
long long  n;
cin>>n;
cout<<n<<" ";
while(n>1)
{
    if(n&1){n=n*3+1;cout<<n<<" ";}
    else
    {
        n/=2;cout<<n<<" ";
    }
}

}
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
   // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
