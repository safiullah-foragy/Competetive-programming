#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        
         int k = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i]; k += a[i];
        }
        
        k /= n;
        
       
        bool possible = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < k) {
                possible = false;
                break;
            }
            a[i + 1] += a[i] - k;
            a[i] = k;
        }
        
       
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
