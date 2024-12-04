
#include<bits/stdc++.h>
using namespace std;

void solve()

 {

string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
                i++;
            else
            {
                st.insert(s[i]);
            }
        }
        for(auto it:st)
        {
            cout<<it;
        }
        cout<<endl;return;

}
   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
