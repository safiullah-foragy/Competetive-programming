#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v1(n);
    map<int, int> mp;

    
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        mp[v1[i]]++;
    }

    
    vector<pair<int, int>> sortedVec(mp.begin(), mp.end());

    
    sort(sortedVec.begin(), sortedVec.end());

    
    map<int, int> sortedMap(sortedVec.begin(), sortedVec.end());

    
    for (const auto& pair : sortedMap) {
        cout << "Element: " << pair.first << ", Frequency: " << pair.second << endl;
    }

    return 0;
}
