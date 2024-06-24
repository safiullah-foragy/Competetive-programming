#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       int n,m;
       string s;
       cin>>n>>m>>s;
       map<char,int>mp;
       map<char,int>mpp;
      
string ss="ABCDEFG";

for(int i=0;i<7;i++)
{
    mpp[ss[i]]=0;
}
 for(int i=0;i<n;i++)
       {
        mp[s[i]]++;
       }

        for(auto k:mp)
       {
        mpp[k.first]=k.second;
       }

       int need=0;
       for(int j=0;j<7;j++)
       {
if(mpp[ss[j]]>=2){continue;}

else{need=need+m-mpp[ss[j]];}
        
       }

        cout<<need<<endl;
      
    }
    return 0;
}
