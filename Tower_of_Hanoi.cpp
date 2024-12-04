
#include<bits/stdc++.h>
using namespace std;
void hanoy(int n,int a,int b,int c)
{
    if(n==1){cout<<a<<" "<<c<<endl;return;}
    hanoy(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
hanoy(n-1,b,a,c);
}

   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
cout<<pow(2,t)-1<<endl;
    hanoy(t,1,2,3);
    
    
    
    return 0;
}
