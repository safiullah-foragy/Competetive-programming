#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s, s1, s2;
        cin >> s >> s1 >> s2;
        for(int)

        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]] = 11;
        }

        
        for (int i = 0; i < n; i++) {
            int s1_value = s1[i] - '0'; 
            if (mp[s[i]] > s1_value) {
                mp[s[i]] = s1_value;
            }
        }
    int sum=0;


       
        for (auto &p : mp) {
            cout << p.first <<" "<<p.second<<endl;
        }
    }

    return 0;
}
