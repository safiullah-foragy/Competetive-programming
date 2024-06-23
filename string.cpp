#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        string s;
        cin>>n>>s;
        string s1=s;
        string s2="";
        sort(s1.begin(),s1.end());
        
        for(int i=0;i<n-1;i++) {
            if(s1[i]!=s1[i+1]){s2+=s1[i];}
        }
        s2+=s1[n-1];

        int l=s2.length();
        for(int i=0;i<n;i++) {
            for (int j=0;j<=l-1;j++) {
              if(s[i]==s2[l-1-j]){cout<<s2[j];break;}
               
            }
        }
        cout<<endl;
    }
    return 0;
}
