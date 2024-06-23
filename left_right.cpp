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
vector<int>pr(n+1);
pr[0]=0;
for(int i=0;i<n;i++)
{
    pr[i+1]=pr[i]+s[i]-'0';
}
int ans=-1;
for(int i=0;i<=n;i++)
{
    int left=i-pr[i];
    int right=pr[n]-pr[i];
    if(2*left>=i&&2*right>=n-i)
    {
        if(ans==-1||abs(n-2*i)<abs(n-2*ans)){ans=i;}
    }
}


cout<<ans<<endl;

}

    return 0;
}