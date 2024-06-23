#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--) {
        ll single, poly, uni;
        cin >> single >> poly >> uni;
        
    

        ll needPoly = (3 - poly % 3) % 3;
        if (poly > 0 && needPoly > uni) {
            cout << "-1\n";
        }

        uni -= needPoly;
        poly += needPoly;

        ll mn = single + uni / 3 + (uni % 3 + 1) / 2 + poly / 3;

    
        cout << mn << '\n';

    }

    return 0;
}
