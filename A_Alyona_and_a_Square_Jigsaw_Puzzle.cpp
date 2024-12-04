#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }
int sum=-1;
int cnt=0;
   for(int j=0;j<n;j++)
   {
    sum+=v[j];
    int i=1;
    
while(i*i-1<=sum)
{
    if(sum==i*i-1){cnt++;}
    i+=2;
  
}

   }

cout<<cnt<<endl;
  
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
