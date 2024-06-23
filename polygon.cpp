#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    
    for (int i = 1; i <= tt; i++) {
      int n;
      cin>>n;
      vector<int>v(n);
      map<int,int>mp;
      for(auto &i:v)
      {
        cin>>i;
        mp[i]++;
      }
      int result =0;
      for(auto &j:mp)
      {
        if(j.second>2){

result+=(j.second)/3;

        }
        
        
        }

cout<<result<<endl;
    }

    return 0;
}
