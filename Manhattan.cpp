
#include <bits/stdc++.h>
using namespace std;

void solve()

 {
int m,n;
cin>>n>>m;
vector<string>v(n);

for(auto &i:v)
{
cin>>i;
}
int r1,r2,c1,c2;
int f=0;
for(int j=0;j<n;j++)
{

for(int i=0;i<m;i++)
{
if(v[j][i]=='#'){r1=j;break;f=1;}

}
if(f){break;}
}

f=0;

for(int j=n-1;j>=0;j--)
{

for(int i=0;i<m;i++)
{
if(v[j][i]=='#'){r2=j;break;f=1;}

}
if(f){break;}
}

int row=(r1+r2)/2;

for(int i=0;i<m;i++)
{
if(v[row][i]=='#'){c1=i;break;}
}
for(int i=m-1;i>=0;i--)
{
if(v[row][i]=='#'){c2=i;break;}
}
int column=(c1+c2)/2;

cout<<row+1<<" "<<column+1<<endl;
}
   

int main() {
   
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
