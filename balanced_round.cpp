
#include <bits/stdc++.h>
using ll=long long;
using namespace std;

void solve()

 {
int n;
ll k;
cin>>n>>k;
set<ll>st;
vector<ll>v(n);

for(auto &i:v)
{
cin>>i;

}

sort(v.begin(),v.end());
int cnt=1,max1=1;
for(int i=1;i<n;i++)
{
    if(v[i]-v[i-1]>k){cnt=1;}

    else {cnt++;}

    max1=max(max1,cnt);
}

cout<<n-max1<<endl;


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