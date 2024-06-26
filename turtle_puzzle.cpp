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
    int sum=0;
    for(auto&i:v){int x;cin>>x;if(x<0){sum+=abs(x);}else{sum+=x;}}
    cout<<sum<<endl;
  }
  return 0;
}