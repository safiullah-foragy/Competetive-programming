#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    bool multi = true;
    cin >> t;
    if (!multi) t = 1; // Adjusting the value of t if multi is false
    
    for (int tc = 1; tc <= t; ++tc) {
        int a, b, l;
        cin >> a >> b >> l;
        set<int> ans;
        
        for (int i = 0; i <= 34; ++i) {
            int x = l;
            bool fail = false;
            
            for (int j = 0; j < i; ++j) {
                if (x % a) {
                    fail = true;
                    break;
                }
                x /= a;
            }
            
            if (fail) break;
            
            while (true) {
                ans.insert(x);
                if (x % b) break;
                x /= b;
            }
        }
        
        cout << ans.size() << "\n";
    }
    
    return 0;
}
