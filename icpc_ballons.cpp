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
    int n;cin>>n;
    string s;
    cin>>s;
    int ballons=0;
    int count=0;
    int d=1;
    sort(s.begin(),s.end());
     for(int i=0;i<n-1;i++)
     {

if(s[i]!=s[i+1]){d++;}
     }
    cout<<n+d<<endl;
  }
  return 0;
}