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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v1(n);
    vector<int>v2(m);

    for(auto &i:v1){cin>>i;}
    for(auto &j:v2){cin>>j;}
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v1[i]+v2[j]<=k){count++;}
        }
    }
    cout<<count<<endl;
  }
  return 0;
}