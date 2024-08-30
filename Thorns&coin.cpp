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
    string s;
    cin>>s;
    int ind=-1;
     int coin=0;
    for(int i=0;i<n;i++)
    {
         if(s[i]=='@'){coin++;}
if((s[i]=='.'||s[i]=='@')&&(s[i+1]=='*'&&s[i+2]=='*')){break;}
 
    }

    cout<<coin<<endl;
  }
  return 0;
}