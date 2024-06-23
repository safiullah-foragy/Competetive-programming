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
    map<char,int>mp;
    for(int i=0;i<4;i++)
    {
mp[s[i]]++;

    }
    int count=mp.size();
    if(count==1){cout<<"-1"<<endl;}
   else  if(count==4||count==3){cout<<"4"<<endl;}
 else   {
vector<int>v;
for(auto i:mp)
{
v.push_back(i.second);

}
sort(v.begin(),v.end());
if(v[0]==2){cout<<"4"<<endl;}

else{cout<<"6"<<endl;}
  }


    
    
  }
  return 0;
}