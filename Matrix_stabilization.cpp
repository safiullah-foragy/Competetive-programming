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
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    bool ok=true;
    while(ok)
    {
        ok=false;
        int up,down,left,right;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i>0){up=v[i-1][j];}
            else{up=0;}
            if(j>0){left=v[i][j-1];}
            else{left=0;}
            if(i<n-1){down=v[i+1][j];}
            else{down=0;}
            if(j<m-1){right=v[i][j+1];}
            else{right=0;}
            int man=max(max(up,down),max(left,right));

            if(v[i][j]>man){v[i][j]=man;ok=true;}
        }
    }
    }
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

  }
  return 0;
}