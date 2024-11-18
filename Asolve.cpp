#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin>>n;
  vector<int>v(n);
  map<int,int>mp;

  for(auto &i:v)
  {
    cin>>i;
    mp[i]++;
  }

  int count=0;
  for (auto it = mp.begin(); it != mp.end(); ++it) {
    
    int r=it->second;
       if(r>1){count+=(r/2);}
    }

  
  cout<<count<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
  solve(); 

}
   

    return 0;
}
