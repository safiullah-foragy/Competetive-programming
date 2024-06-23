#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        vector<string> v(8);
        int r = -1, c = -1;

        
        for (int i = 0; i < 8; i++) {
            cin >> v[i];
        }

       
        for (int i = 1; i < 7; i++) {
            for (int j = 1; j < 7; j++) {
                if (v[i][j] == '#' && v[i - 1][j + 1] == '#' && v[i - 1][j - 1] == '#' && v[i + 1][j + 1] == '#' && v[i + 1][j - 1] == '#') {
                    r = i + 1;
                    c = j + 1;
                    break;
                }
            }
            if (r != -1) {
                break;  
            }
        }

        cout << r << " " << c << endl;
    }

    return 0;
}
