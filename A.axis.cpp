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
    int a,b,c;
    cin>>a>>b>>c;
    int r1,r2,r3;
    r1=abs(a-a)+abs(b-a)+abs(c-a);
     r2=abs(a-b)+abs(b-b)+abs(c-b);
      r3=abs(a-c)+abs(b-c)+abs(c-c);

      int mini=min(r1,min(r2,r3));
      cout<<mini<<endl;

  }
  return 0;
}