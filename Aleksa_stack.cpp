#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int cnt=2,p=0;
        for(int i=1;i<=n;i++)
        {
cnt++;
if(i%3==0){
    cnt++;
    p++;
    if(p%2==0)cnt++;
}
cout<<cnt<<" ";
        }
        cout<<endl;
        }
        
    
    return 0;
}
