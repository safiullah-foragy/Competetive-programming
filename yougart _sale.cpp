#include <iostream> // 

using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b; 

        int result;

        if (b > 2 * a) {
            result = n * a; 
        } else if (n % 2 == 0) {
            result = (n / 2) * b; 
        } else {
            result = ((n - 1) / 2) * b + a;  
        }

        cout << result << endl; 
    }

    return 0;
}
