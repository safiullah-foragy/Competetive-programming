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
    long long int n;
    cin>>n;
    long long int count=0;
    while(1)
    {
        if(n%2==0){n=n/2;count++;}
       else if(n%3==0){n=(2*n)/3;count++;}
        else if(n%5==0){n=(4*n)/5;count++;}

        else if(n!=1){cout<<"-1"<<endl;break;}
        if(n==1){cout<<count<<endl;break;}
    }
  }
  return 0;
}