
#include<bits/stdc++.h>
using namespace std;

void solve()

 {
int k,n;
cin>>n>>k;
string s;
cin>>s;
int maxi=0;
int count=0;
for(int i=0;i<n;i++)
{
if(s[i]=='B'){count++;}

if(s[i]!='B'){maxi=max(maxi,count);count=0;}
}
cout<<k-maxi<<endl;
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
