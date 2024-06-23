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
    int n,m;
    cin>>n>>m;
    string s="vika";
    vector<string>carpet(n);
    for(int i=0;i<n;i++)
    {
       cin>>carpet[i]; 
    }
int in=0;
bool yes=false;
    for(int j=0;j<m;j++)
    {
       int flag=0;
        for(int k=0;k<n;k++)
        {
            if(carpet[k][j]==s[in]){flag=1;}
            
        }
        if(flag){++in;if(in==4){yes=true;break;}}
             
        
    }
    if(yes){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    
  }
  return 0;
}