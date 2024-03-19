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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }

    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0){even++;}
        else{odd++;}
    }
if(even==n||odd==n){cout<<"0"<<endl;}
else if(even>=odd){cout<<odd<<endl;}
else if(even<odd){cout<<even<<endl;}

    
  }
  return 0;
}