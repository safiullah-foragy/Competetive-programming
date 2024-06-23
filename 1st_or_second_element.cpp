#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
string s;
cin>>s;
map<char,int>mp;
int res=0;
for(int i=0;i<n;i++)
{
if(mp[s[i]]){continue;}
res+=n-i;
mp[s[i]]++;

}
cout<<res<<endl;
}
    return 0;
}