#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       int n,f,k;
       cin>>n>>f>>k;
       vector<int>v(n);
       for(auto i:v)
       {cin>>i;}
int pr=v[f-1];
int now;
       sort(v.begin(),v.end());
 for(int i=0;i<n;i++){if(v[i]==pr){now=i+1;}break;}
 bool ok=0;

for(int j=k;j<n;j++){if(v[j]==pr){ok=1;break;}}
      if(f<k&&ok==0){cout<<"YES"<<endl;continue;}  
      if(f<k&&ok==1){cout<<"MAYBE"<<endl;continue;}  
      if(f>k){cout<<"NO"<<endl;continue;}

      if(f==k&&ok==0){cout<<"YES"<<endl;continue;
        
      }
      if(f==k&&ok==1){cout<<"MAYBE"<<endl;continue;
        
      }
      
      
    }
    return 0;
}
