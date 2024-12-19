#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
    int n,m;
    cin>>n>>m;
    int sum=0;
    int count=0;

    vector<string>v(n);
    vector<int>v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        
        //v1[i]=v[i].size();
        
    }

    for(int i=0;i<n;i++)
    {
        if(sum+v[i].length()<=m){count++;}
        sum+=v[i].length();
    }

    cout<<count<<endl;
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
