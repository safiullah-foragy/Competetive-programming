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
    vector<string>v(3);
    
    int s;
    bool a=true,b=true,c=true;
    cin>>v[0]>>v[1]>>v[2];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        if(v[i][j]=='?'){
s=i;



        }

        }
        
    }
    for(int k=0;k<3;k++){
if(v[s][k]=='A'){a=false;}
if(v[s][k]=='B'){b=false;}
if(v[s][k]=='C'){c=false;}


    }
    if(a){cout<<"A"<<endl;}
    if(b){cout<<"B"<<endl;}
    if(c){cout<<"C"<<endl;}
   
  }
  return 0;
}