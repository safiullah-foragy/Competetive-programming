#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int x;
    cin>>x;
    int z=x-1;
    set<int>st;
    
    while(z>0)
    {
        st.insert((__gcd(x,z))+z);
        z--; 
    }
    auto it=st.end();
    cout<<*--it-1<<endl;
}
    return 0;
}