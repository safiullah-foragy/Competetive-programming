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
    int sum=0;
    vector<int>v(n);
    for(auto&i:v){cin>>i;sum+=i;}
if(sum%3==0){cout<<"0"<<endl;continue;}
int gap=((sum/3)+1)*3-sum;
bool ok=false;
for(int i=0;i<n;i++)
{
    if((sum-v[i])%3==0){ok=true;break;}
}
if(ok){cout<<"1"<<endl;continue;}
else{cout<<gap<<endl;}


  }
  return 0;
}