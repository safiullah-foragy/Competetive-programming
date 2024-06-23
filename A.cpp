#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
       string s;
       cin>>s;
       char temp;
       bool ok=false;
       int l=s.length();
       for(int i=0;i<l-1;i++)
       {
if(s[i]!=s[i+1]){temp=s[i];s[i]=s[i+1];s[i+1]=temp;ok=true;}
       }
       if(ok){cout<<"YES"<<endl<<s<<endl;}
       else{cout<<"NO"<<endl;}
        
    }
    
    return 0;
}
