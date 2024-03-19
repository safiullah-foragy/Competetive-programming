#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.second<=b.second){
         if(a.second<b.second)
            return true;
         else
         {
            return a.first<b.first;
         }   
    }
      
    else
       return false;   
}
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
    pair<int,int>p[n];
    pair<int,int>p1[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
        cin>>p1[i].first>>p1[i].second;
    }
   
    sort(p,p+n,cmp);
    int sc;
      for(int i=n-1;i>=0;i--)
    {
        if(p[i].first<=10){sc=p[i].second;break;}
    }
    for(int j=0;j<n;j++){
        if(p1[j].second==sc){cout<<j+1<<endl;break;}
    }
  }
  return 0;
}