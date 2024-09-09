
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()

 {
int x, y, k,step;
        cin >> x >> y >> k;

     
        if(x>y){

        if(x%k==0){step=2*(x/k)-1;}

        else{step=2*((x/k)+1)-1;}

}
else if(y>x)
{
   if(y%k==0){step=2*(y/k);}

        else{step=2*((y/k)+1);}

        
}
else{step=(y/k)*2;if(y%k!=0){step+=2;}}

cout<<step<<endl;
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
