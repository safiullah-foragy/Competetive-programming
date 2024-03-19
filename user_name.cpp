#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();

        // Check if the string is not empty and the last character is '0'
        while (n > 0 && s[n - 1] == '0') {
            n--; // Decrement n as long as the last character is '0'
        }

        // Output the modified string
        for (int i = 0; i < n; i++) {
            cout << s[i];
        }

        cout << endl;
    }

    return 0;
}
