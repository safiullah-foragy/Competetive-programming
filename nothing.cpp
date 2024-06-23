#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
      int a,b,c,d,temp;
      cin>>a>>b>>c>>d;
      int count=0;
      int ok=0,ok1=0;
      
      if(a>b){temp=a;a=b;b=temp;}
   
      for(int i=a;i<=b;i++)
      {
if(c==i){ok=1;}
if(d==i){ok1=1;}


      }
       
if(ok==1&&ok1==1){cout<<"NO"<<endl;continue;}
if(ok==0&&ok1==0){cout<<"NO"<<endl;continue;}
else{cout<<"YES"<<endl;}
      
    }
    
    return 0;
}
