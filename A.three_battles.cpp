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
        int a,b,c;
        cin>>a>>b>>c;
        int mini=min(a,min(b,c));
        bool ok=true;
        if(a%mini!=0&&b%mini!=0&&c%mini!=0){ok=false;}
        int count=0;
        while(a!=mini)
        {
            if(count>3||a%mini!=0)
            {
ok=false;break;
            }
        
        a-=mini;
        count++;
        }
        while(b!=mini)
        {
            if(count>3||b%mini!=0)
            {
ok=false;break;
            }
        
        b-=mini;
        count++;
        }
         while(c!=mini)
        {
            if(count>3||c%mini!=0)
            {
ok=false;break;
            }
        
        c-=mini;
        count++;
        }
        if(count<=3&&ok){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }

    return 0;
}
