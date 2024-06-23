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
    int a,b;
    int max=-1;
    int m=0;
    for(int i=0;i<n;i++)
    {
cin>>a>>b;
if(a<=10&&b>max){max=b;m=i;}
    }
    cout<<m+1<<endl;
  }
  return 0;
}