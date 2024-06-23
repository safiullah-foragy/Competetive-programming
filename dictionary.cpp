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
    string s;
    cin>>s;
    int ans;
    if(s[0]>s[1]){
     ans=(s[0]-97)*25+(s[1])-96;}

     else{ans=(s[0]-97)*25+(s[1])-96-1;}
     cout<<ans<<endl;
  }
  
  return 0;
}