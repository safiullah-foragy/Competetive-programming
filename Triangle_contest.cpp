#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;

    while(q--) {
        int n;
        cin >> n;

    
       long long int a[n];
        int p;
        for(int i = 0; i < n; i++) {
            cin >> p;
            a[i] = pow(2, p);
        }

        int count = 0;
        if (n < 3) {
            cout << 0 << endl;
            continue;}
/*if(n==3){
    if (a[0] < a[1] + a[2] && a[1] < a[2] + a[0] && a[2] < a[1] + a[0]){cout << 0 << endl;continue;}
    else{cout<<0<<endl;continue;}*/

        

        int size = n;
    
        for (int i = 0; i < size - 2; i++) {
            for (int j = i + 1; j < size - 1; j++) {
                for (int k = j + 1; k < size; k++) {
                   /* s = (a[i] + a[j] + a[k]) / 2.0;
                    area = sqrt(s * (s - a[i]) * (s - a[j]) * (s - a[k]));*/

                    if (a[i] < a[j] + a[k] && a[j] < a[i] + a[k] && a[k] < a[j] + a[i]) {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
