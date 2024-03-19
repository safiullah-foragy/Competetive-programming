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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int b=0;
    for(int i=0;i<n;i++){if(v[i]==k){b=1;break;}}
    if(b==1){
cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
  }
  return 0;
}