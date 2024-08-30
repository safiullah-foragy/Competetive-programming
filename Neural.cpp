
#include <bits/stdc++.h>
using namespace std;

void solve()

 {
int n;
cin>>n;
vector<int>v(n);
for(auto &i:v)
{
cin>>i;
}
int sum=0;
for(int i=0;i<n-1;i++)
{
sum+=v[i]*v[i+1];
}

cout<<sum<<endl;

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
