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
    vector<string>v(2);
    cin>>v[0]>>v[1];
    bool check=true;
    for(int i=0;i<n;i++)
    {

        if(v[0][i]!=v[1][i])
        {

if((v[0][i]=='R'||v[1][i]=='R')){check=false;break;}
        }
    }
    if(check){cout<<"YES"<<endl;}
   else{cout<<"NO"<<endl;}
  }
  return 0;
}