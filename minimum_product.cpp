#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long int a,b,x,y,n;
cin>>a>>b>>x>>y>>n;
long long int res1,res2,d1,d2,d3,d4,d5,d6;
d1=a-x;
d2=b-y;
if(n>d1+d2){n=d1+d2;}
if(n>=d1){d3=a-d1;d4=b-(n-d1);}
else{d3=a-n;d4=b;}

if(n>=d2){d5=b-d2;d6=a-(n-d2);}
else{d5=b-n;d6=a;}
res1=d3*d4;
res2=d5*d6;
// cout<<res1<<endl;
cout<<min(res1,res2)<<endl;


}
    return 0;
}