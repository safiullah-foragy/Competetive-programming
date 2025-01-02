#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 


void solve() {
    int n;
    cin>>n;
      vector<int>v(2*n);

      int odd=0;
      int even=0;
      for(auto&i:v)

      {   

        cin>>i;

        if(i%2==0){even++;}

        else odd++;

      }

      if(odd=n&&even==n){cout<<"Yes"<<endl;}

      else {cout<<"No"<<endl;}

   
  
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
