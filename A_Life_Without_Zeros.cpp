#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve() {
    ll a,b,c,sum1=0;
    cin>>a>>b;
    c=a+b;
    ll sum=0;
    int count=0;
    while(a>0)
    {
        if(a%10!=0){sum+=(a%10)*pow(10,count);count++;}
        a=a/10;
        
    }

    count=0;
    while(b>0)
    {
        if(b%10!=0){sum+=(b%10)*pow(10,count); count++;}
        b=b/10;
       
    }
     count=0;
    while(c>0)
    {
        if(c%10!=0){sum1+=(c%10)*pow(10,count); count++;}
        c=c/10;
       
    }

    if(sum==sum1){cout<<"YES"<<endl;}

    else {cout<<"NO"<<endl;}
    
  
    }

    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
