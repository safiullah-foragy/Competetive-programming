#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
     string s;
     cin>>s;
     int l=s.length();
     int count=1;

     for(int i=0;i<l-1;i++)
     {
if(s[i]!=s[i+1])
{
    count++;
}


     }
     if(count==2&&s[0]=='0'){

       count--;
     }
     if(count >2){count--;;}

     cout<<count<<endl;
    }
    
    return 0;
}
