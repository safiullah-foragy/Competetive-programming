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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int count=0;
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(v[j]*v[k]==j+1+k+1){count++;}
        }
    }
    cout<<count<<endl;
  }
  return 0;
}