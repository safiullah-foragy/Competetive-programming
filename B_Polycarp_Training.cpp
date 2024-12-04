#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
  int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	
	int pos = 1;
	for (int i = 0; i < n; ++i) {
		if (a[i] >= pos) ++pos;
	}
	
	cout << pos - 1 << endl;

  
    }

    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
