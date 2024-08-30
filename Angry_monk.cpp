#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >>n>>k; 
    
    vector<int> v(k);
   int max=-1;
   for(auto &i:v)
   {
   cin>>i;
   if(max<i){max=i;}

   }
   
   cout<<2*(n-max)-k+1<<endl;
   
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
