
#include <bits/stdc++.h>
using namespace std;

void solve()

 {
int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int even =0 ,ans=k;
    for (auto&i:v) { 
        cin >> i;
        if(i%2==0){
            even++;
        }
        if(i%k==0){
            ans = 0;
        }
        ans=min(ans,k-i%k);
    }
    if(k==4){
        if(even>=2){
            ans=0;
        }
        else if(even==1){
            ans=min(ans,1);
        }
        else{
            ans = min(ans,2);
        }
    }


    cout<<ans<<endl;

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
