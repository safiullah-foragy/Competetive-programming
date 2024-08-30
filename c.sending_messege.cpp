
#include <bits/stdc++.h>
using namespace std;

void solve()

 {

long long int n,a,b,f,x,y;
cin>>n>>f>>a>>b;
vector<long long int>v(n);

for(auto &i:v)
{
cin>>i;
}
if(((v[0])*a)<b){f=f-((v[0])*a);}
else{f=f-b;}

for(int i=0;i<n-1;i++)
{
if(((v[i+1]-v[i])*a)<=b){f-=((v[i+1]-v[i])*a);}
else{f-=b;}

}
if(f>0){cout<<"YES"<<endl;}

else{cout<<"NO"<<endl;}

}
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {solve();}
        
    return 0;
}
