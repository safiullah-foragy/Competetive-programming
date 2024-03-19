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

    vector<string>v(8);
    for(int i=0;i<8;i++)
    {
       cin>>v[i];
    }
for(int i=0;i<8;i++)
    {
        
        for(int j=0;j<8;j++)

        {
           if(v[i][j]>=97&&v[i][j]<=122) cout<<v[i][j];
        }

        
    }
cout<<endl;
  }
  return 0;
}