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
    int min11=1000000,min01=1000000,min10=1000000,min00=1000000;

    pair<int,int>p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
for(int i=0;i<n;i++)
{
     if(p[i].second==11&&p[i].first<min11){min11=p[i].first;}
      if(p[i].second==10&&p[i].first<min10){min10=p[i].first;}
       if(p[i].second==01&&p[i].first<min01){min01=p[i].first;}
       // if(p[i].second==0&&p[i].first<min00){min00=p[i].first;}
}
int result=-1;

if(min11!=1000000&&(min10==1000000||min01==1000000)){result=min11;}
if(min11==1000000&&min10!=1000000&&min01!=1000000){result=min10+min01;}
if(min11<=min01+min10&&min10!=1000000&&min01!=1000000&&min11!=1000000){result=min11;}
if(min11>min01+min10&&min10!=1000000&&min01!=1000000&&min11!=1000000){result=min10+min01;}
// else{result=-1;}
cout<<result<<endl;

 //cout<<min11<<" "<<min10<<" "<<min01<<" "<<min00;

  }
  return 0;
}