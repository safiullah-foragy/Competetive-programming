#include <bits/stdc++.h>
using namespace std;

int time(int a, int b) {
    int hours = a;  
    int candles = a;  
    
    while (candles >= b) {
       
        int new_candles = candles / b;
        hours += new_candles;  
        
        
       candles = candles % b + new_candles;
    }
    
    return hours;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    
    cout << time(a, b) << endl;
    
    return 0;
}
