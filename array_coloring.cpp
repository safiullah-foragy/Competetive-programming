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
     int arr[n];
     int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    if(arr[i]%2==0){even++;}
    else{odd++;}
    
  }
  if(odd%2==0){cout<<"YES"<<endl;}
  else{cout<<"NO"<<endl;}
  }
  return 0;
}