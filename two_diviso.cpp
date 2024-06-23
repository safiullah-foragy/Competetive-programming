#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int result = lcm(a,b);

        // If b is not a multiple of a, update the result accordingly
        if (result== a||result==b) {
           result=(lcm(a, b))*(b/a);;
        }

        cout << result << endl;
    }

    return 0;
}
