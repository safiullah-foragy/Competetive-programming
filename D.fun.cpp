
#include <bits/stdc++.h>
using namespace std;

void solve()

 {

int x,n;
cin>>n>>x;
int sum=0;
for(int i=1;i<=n;i++)
{
    
    for(int j=1;j<=n;j++)
    {
    for(int k=1;k<=n;k++)
    {
        if((i*j+j*k+k*i)<=n&&(i+j+k<=x)){sum++;}
    }
    }
    
}
cout<<sum<<endl;

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
