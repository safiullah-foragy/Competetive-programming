#include <bits/stdc++.h>
using namespace std;


int main(){

   int t;                  cin>>t;
   while(t--){
      int a,b;             cin>>a>>b;

      if(a>1){
         cout<<1<<endl;
         continue;
      }

      if(b>2){
         cout<<2<<endl;
         continue;
      }

      cout<<3<<endl;
   }
   return 0;
}
