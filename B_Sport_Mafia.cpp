#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, k;
    cin >> n >> k;

    if (n == 1 && k == 1) {
        cout << "0" << endl;
        return;
    }

    if (k > n) {
      
        ll x1 = static_cast<ll>(ceil((-1 + sqrt(1 + 8 * k)) / 2));
        ll a = x1;
        ll b = a - 1;
       


        ll a1 = a * (a + 1) / 2;
        ll b1 = b * (b + 1) / 2;
        

         if(b1-k+b==n){cout<<b1-k<<endl;return;}

         while(a1 - k + a != n){
     

    a++;
    a1 = a * (a + 1) / 2;
            
        } 
        cout << a1 - k << endl;
         
         
    }
          else {
      
       
        ll x1 = static_cast<ll>(ceil((-1 + sqrt(1 + 8 * n)) / 2));
        ll a = x1;
         ll b,c,b1,c1,a1;   
    b=a-1;
      c=a+1;
          a1=a*(a+1)/2;
     b1=b*(b+1)/2;
  


 if(b1-k+b==n){cout<<b1-k<<endl;return;}



        while(a1 - k + a != n){
     

    a++;
    a1 = a * (a + 1) / 2;
            
        } 
        cout << a1 - k << endl;

    }}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
