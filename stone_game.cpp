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
    vector<int>v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l1,l2;
    int max=-1;
    int min=1000;
    for(int i=0;i<n;i++)
    {
        if(v[i]>max){max=v[i];l2=i;}
        if(v[i]<min){min=v[i];l1=i;}

    }
    int temp;
    if(l1>l2){temp=l1;l1=l2;l2=temp;}
int ans1;
int ans2;
if((l2+1)%2==0){ans1=l2/2;}
else{ans1=(l2+1)/2;}
if((n-1-l1)%2==0){ans2=(n-1-l1)/2;}
else{ans2=(n-l1)/2;}



  }
  return 0;
}