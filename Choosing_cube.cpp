#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
     int n,f,k;
     cin>>n>>f>>k;
     vector<int>v(n);
     for(int i=0;i<n;i++)
     {
        cin>>v[i];
     }

     int value=v[f-1];
     sort(v.rbegin(),v.rend());
     int rm=v[k-1];


 
if(value<rm){cout<<"NO"<<endl;}

else if(value>rm){cout<<"YES"<<endl;}

else if(value==rm&&n>k&&v[k]==rm){cout<<"MAYBE"<<endl;}
 else {cout<<"YES"<<endl;}

  
       
    }
    
    return 0;
}
