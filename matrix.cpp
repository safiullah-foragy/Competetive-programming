#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<long long int, long long int> mp1; 
    map<long long int, long long int> mp2; 
    vector<long long int> v(n);
    vector<long long int> v1(n);  

    
    for (int i = 0; i < n; ++i) {
        long long int a, b;
        cin >> a >> b;
        mp1[a]++; 
        mp2[b]++; 
        v[i] = a; 
        v1[i] = b;
    }

    long long int num1 = 0;

   
   for(auto &i:mp1)
   {
   num1+=i.second*mp2[i.first];
   }

   cout<<num1<<endl;
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
