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
    vector<int>arr(n);
     vector<int>ve;
      vector<int>vo;
      for(int i=0;i<n;i++)

      {
        cin>>arr[i];
      }

    int odd=0,even=0;

    for(int i=0;i<n;i++)
    {
       
       
        if(arr[i]%2!=0){vo.push_back(i);odd++;}
          
                if(arr[i]%2==0){ve.push_back(i);even++;}
    }
   

   if(odd>=3){cout<<"YES"<<endl;cout<<vo[0]+1<<" "<<vo[1]+1<<" "<<vo[2]+1<<endl;}

    else if(odd<3&&odd>0&&even>=2){cout<<"YES"<<endl;cout<<vo[0]+1<<" "<<ve[0]+1<<" "<<ve[1]+1<<endl;}

    else{cout<<"NO"<<endl;}
  }

  
  return 0;
}