#include<bits/stdc++.h>
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
    int jj=0,jb=0,bj=0,bb=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
if((i+1)%2==0){if(v[i]%2==0){jj++;}
if(v[i]%2!=0){jb++;}
}
if((i+1)%2!=0){if(v[i]%2==0){bj++;}
if(v[i]%2!=0){bb++;}
}
    }
if(jj+bb==n||jb+bj==n||jj+bj==n||bb+jb==n){cout<<"YES"<<endl;}
else
cout<<"NO"<<endl;

  }
  return 0;
}