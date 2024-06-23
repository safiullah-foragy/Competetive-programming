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
   
 long long int a,b;
  long double c,d;
    cin>>a>>b>>c;
    
 long long int price;

if(c/2<b&&a>=2){price=(a/2)*c+(a%2)*b;}
else{price=a*b;}
cout<<price<<endl;

  }
  return 0;
}