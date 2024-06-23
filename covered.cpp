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
    string s;
    cin>>s;
    int a=0,b=0;
    int size=s.size();
    for(int i=0;i<size;i++)
    {
        if(s[i]=='A'){a++;}
        if(s[i]=='B'){b++;}
    }
    if(a>b){cout<<"A"<<endl;}
    else{cout<<"B"<<endl;}
  }
  return 0;
}