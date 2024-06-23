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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d=1;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1]){d++;}
    }
    int rest=n-d;
    if(rest%2!=0){d--;}
    cout<<d<<endl;
  }
  return 0;
}