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
    int start=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
    start+=(x-(start%x));
    }

cout<<start<<endl;
  }
  return 0;
}