#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  
    int n;
    cin>>n;
    vector<string>v(n);

    string s2="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<n;i++){
    cin>>v[i];
    sort(v[i].begin(),v[i].end());
    if(s2.find(v[i])!=string::npos){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
    }
  
  return 0;
}