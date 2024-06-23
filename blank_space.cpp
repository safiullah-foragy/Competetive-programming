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
    
    int count=0;
    int max = 0;
    
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(k == 0){
            count++;
            if(count > max){
                max = count;
            }
        } else {
            count = 0;
        }
    }
    cout << max<<endl;
  }
  return 0;
}
