#include<bits/stdc++.h>
using namespace std;

int main() {
    
    
int tt;
cin>>tt;
while(tt--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int f = -1, l = -1 ;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') {
                f = i;
                break;
            }
        }   //01567949628

        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') {
                l = i;
                
            }
        }  
int result=0;
        if(l == f && l != -1) {
            result = 1;
        } else if(l != f && l != -1 && f != -1) {
            result = l - f + 1;
        }

        cout << result << endl;
}

    return 0;
}
