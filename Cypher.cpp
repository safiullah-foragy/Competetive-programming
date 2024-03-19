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
    pair<int,string>p[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }

    for(int j=0;j<n;j++)
    {
        for(int k=0;k<p[j].first;k++)
        {
            

            if(p[j].second[k]=='D'){arr[j]++;}
             if(p[j].second[k]=='U'){arr[j]--;}
if(arr[j]==10||arr[j]==-10){arr[j]=0;}
if(arr[j]==-1){arr[j]=9;}
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

  }
  return 0;
}