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
    cin >> n;

    string s;
    
cin>>s;
    
    sort(s.begin(), s.end());
char c=s[n-1];
    int result=(static_cast<int>(c));
    cout<<result-96<<endl;
  }

  return 0;
}
