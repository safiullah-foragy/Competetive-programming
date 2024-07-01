#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        string s;
        cin >> s;
        
        unordered_map<int, char> map;
        bool isValid = true;
        
        for (int i = 0; i < n; i++) {
            int num = arr[i];
            char ch = s[i];
            
            if (map.count(num)) {
                if (map[num] != ch) {
                    isValid = false;
                    break;
                }
            } else {
                map[num] = ch;
            }
        }
        
        if (isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        
    }
    
    return 0;
}
