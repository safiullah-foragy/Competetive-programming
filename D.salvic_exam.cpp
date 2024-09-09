
#include <bits/stdc++.h>
using namespace std;

void solve()

 {
 string s, t;
  cin >> s >> t;
  int idx = 0;
  int n=s.size();
  int m=t.size();
    
    	for(int i = 0; i < n; ++i) {
    		if(s[i] == '?') {
    			if(idx < m) {s[i] = t[idx];idx++;}
    			else{ s[i] = 'a';}
    		}
             else if(s[i] == t[idx]) idx++;
    	}
    	if(idx >= m) {cout << "YES" <<endl<< s <<endl;}
    	else {cout << "NO"<<endl;}
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
