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
    string s,ss;
    cin>>s>>ss;
    int a=0,b=0,c=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1'){a++;}
        if(ss[i]=='1'){b++;}
        if(ss[i]!=s[i]&&ss[i]=='1'){c++;}
    }
    int res=c;
    if(a>b)res+=a-b;
    cout<<res<<endl;

  }
  return 0;
}