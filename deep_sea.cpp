#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d, c;
        cin >> n >> c >> d;


        vector<int> v(n * n);
        for (int i = 0; i < n * n; i++) {
            cin >> v[i];
        }

        // Generating the matrix
        vector<vector<int>> matrix(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 1;
            for (int j = 1; j < n; j++) {
                matrix[i][j] = matrix[i][j - 1] + d;
            }
        }
        for (int j = 0; j < n; j++) {
            for (int i = 1; i < n; i++) {
                matrix[i][j] = matrix[i - 1][j] + c;
            }
        }

        // Storing elements of the generated matrix in a set
        unordered_set<int> matrix_elements;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix_elements.insert(matrix[i][j]);
            }
        }

        // Checking if all elements provided by the user are present in the set
        bool valid = true;
        for (int i = 0; i < n * n; i++) {
            if (matrix_elements.find(v[i]) == matrix_elements.end()) {
                valid = false;
                break;
            }
        }

        // Outputting the result
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
