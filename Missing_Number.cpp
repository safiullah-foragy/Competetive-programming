
#include<bits/stdc++.h>
using namespace std;

void solve()

 {

long long sum,sum1=0;
int n;
cin>>n;
for(int i=0;i<n-1;i++)
{
    int x;
    cin>>x;
    sum1+=(long long)x;
}
sum=(n*(n+1))/2;

cout<<sum-sum1<<endl;

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
