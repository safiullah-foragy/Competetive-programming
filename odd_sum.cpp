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
    int even=0,odd=0,sum=0;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
if(x%2==0){even++;}
if(x%2!=0){odd++;}
sum+=x;
    }
    if(sum%2!=0||(odd>0&&even>0)){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}

  }
  return 0;
}