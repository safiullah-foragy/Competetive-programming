#include <iostream>
using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;
    
    // Process each test case
    while (t--) {
        long long x;
        cin >> x;
        
        // Check if x is divisible by 33
        if (x % 33 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
