#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b,c;
        cin>>a>>b>>c;
        int r;
        if(a==b){r=c;}
        if(a==c){r=b;}
        if(b==c){r=a;}
    cout<<r<<endl;
    }
    
    return 0;
    }