
#include <bits/stdc++.h>
using ll=long long;
using namespace std;

void solve()

{
int n;
cin>>n;
vector<ll>v(n);
vector<ll>v1(n);
vector<ll>v2(n);
ll sum=0,maxi=-1;
for(int i=0;i<n;i++)
{
ll  a;
cin>>a;
v[i]=a;
maxi=max(maxi,a);
v2[i]=maxi;
sum+=v[i];
v1[i]=sum;
}


ll count=0;
for(int i=0;i<n;i++)
{
if(v2[i]==v1[i]-v2[i]){count++;}
}

cout<<count<<endl;


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
