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
    int n,tt;
    cin>>n>>tt;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
 cin>>arr1[i];
    }
   
    for(int i=0;i<n;i++)
    {
       cin>>arr2[i];
    }

    int max=0,s=-1;
    for(int i=0;i<n;i++)
    {
       if(tt-i>=arr1[i]&&arr2[i]>max){s=i;max=arr2[i];}
    }
   
    if(max==0){
    cout<<s<<endl;}
    else{ cout<<s+1<<endl;}
  }
  return 0;
}