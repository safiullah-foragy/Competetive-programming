#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 


void solve() {
    int n,k;
    cin >> n;

   
    vector<int>v(n);


   for(auto&i:v)

{

cin>>i;
}

bool found=false;
    for(int i=0;i<n-1;i++)
    {
        if((2*(v[i])>v[i+1])&&((2*(v[i+1])>v[i]))&&(v[i]+v[i+1]>v[i])&&(v[i]+v[i+1]>v[i+1]))

   {

    found=true;
   }
    }
       
    if(found){cout<<"YES"<<endl;}

    else  cout<<"NO"<<endl;

   
  
    }

    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
