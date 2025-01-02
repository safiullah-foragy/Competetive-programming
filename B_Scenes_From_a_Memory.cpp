#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    int k;
    string ms;
    cin >> k;
    cin >> ms;

    int four = 0, six = 0, eight = 0, nine = 0, one = 0, two = 0;

  
    for (int i = 0; i < k; i++) {
        char digit = ms[i];

        if (digit == '4') {
            four++;
        } else if (digit == '6') {
            six++;
        } else if (digit == '8') {
            eight++;
        } else if (digit == '9') {
            nine++;
        } else if (digit == '1') {
            one++;
        } else if (digit == '2') {
            two++;
        }
    }

  
    // if (four) {
    //     cout << "1" << endl << "4" << endl;
    //     return;
    // } else if (six) {
    //     cout << "1" << endl << "6" << endl;
    //     return;
    // } else if (eight) {
    //     cout << "1" << endl << "8" << endl;
    //     return;
    // } else if (one) {
    //     cout << "1" << endl << "1" << endl;
    //     return;
    // } else if (nine) {
    //     cout << "1" << endl << "9" << endl;
    //     return;
    // } else if (two >= 2) {
    //     cout << "2" << endl << "22" << endl;
    //     return;
    // }

   cout<<six;
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}







// vector<string> vs = {"25", "35", "75", "52", "27", "57", "72", "33", "55", "77"};

   
    // for (int i = 0; i < k; i++) {
    //     for (int j = i + 1; j < k; j++) {
    //         char c1 = ms[i];
    //         char c2 = ms[j];

           
    //         string s1 = string(1, c1) + string(1, c2);
    //         string s2 = string(1, c2) + string(1, c1);

           
    //         for (const string& valid_pair : vs) {
    //             if (valid_pair == s1) {
    //                 cout << "2" << endl << s1 << endl;
    //                 return;
    //             } else if (valid_pair == s2) {
    //                 cout << "2" << endl << s2 << endl;
    //                 return;
    //             }
    //         }
    //     }
    // }