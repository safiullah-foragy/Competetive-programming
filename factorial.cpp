#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, q,m=0;
    cin >> n >> k >> q;
    
   
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if(x<=q){m++;}
    }
int sum=0;
    for(int i=k;i<=m;i++)
    {
int combination=tgamma(m)/tgamma(i)*tgamma(m-i+1);
if(i>1&&i<m){combination--;}

sum+=combination;
        
    }
    
   
    
    cout << sum << endl;
}

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        solve();
    }

    return 0;
}
