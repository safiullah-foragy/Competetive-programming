#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
    int n,x;
    cin>>x;
   
    int y;
    bool brak=false;
    while(1)
    {
       n=x;
    int sum=0;
    while(n>0)
    {
      sum=sum+n%10;
      n=n/10;
    }
    if(sum%4==0){brak=true;}
    
    if(brak){y=x;break;}
    x++;}
    cout<<y<<endl;
  
  return 0;
}