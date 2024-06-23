#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "";
        reverse(s.begin(), s.end());
        for (int i = 0; i < n; ) {
            if (s[i] == '0') {
               string sub="";
               sub=s.substr(i+1,2);
               i+=3;
                reverse(sub.begin(), sub.end());
                int m = stoi(sub);
                char c = static_cast<char>(m + 96);
                res += c;
            } else {
                char c = static_cast<char>((s[i] - '0') + 96);
                res += c;
                i++;
            }
        }
        reverse(res.begin(), res.end());
        cout << res << endl; 
    }
    return 0;
}
