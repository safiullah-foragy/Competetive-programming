#include <iostream>
using namespace std;

const int N = 1000010;

int main() {
    int T, n;
    char a[3][N];

    cin >> T;
    while (T--) {
        cin >> n;

        // Reading the two strings
        for (int i = 1; i <= 2; i++) {
            cin.ignore(); // Ignore newline character
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }

       
        int max_down = n, min_down = 1;
        for (int i = n; i >= 2; i--) {
            if (a[1][i] == '1' && a[2][i - 1] == '0') {
                max_down = i - 1;
            }
        }
        for (int i = 1; i < max_down; i++) {
            if (a[2][i] == '1' && a[1][i + 1] == '0') {
                min_down = i + 1;
            }
        }

        
        for (int i = 1; i <= max_down; i++) {
            cout << a[1][i];
        }
        for (int i = max_down; i <= n; i++) {
            cout << a[2][i];
        }
        cout << endl;
        cout << max_down - min_down + 1 << endl;
    }

    return 0;
}
