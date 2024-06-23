#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
      int n;
      cin>>n;
      string s="abcdefghijklmnopqrstuvwxyz";
      map<char,int>mp;
      for(int i=0;i<26;i++){mp[s[i]]=0;}
      vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        for(auto &j:mp)
        {
            if(j.second==v[i])
            {
                cout<<j.first;
                mp[j.first]++;
                break;

            }
        }
    }
    cout<<endl;
}
    
    
    return 0;
}
