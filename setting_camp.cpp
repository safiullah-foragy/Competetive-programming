#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
       long long int a,b,c,result;
       cin>>a>>b>>c;
       if(b%3!=0&&(3-(b%3))>c){cout<<"-1"<<endl;continue;}
       if(((b%3)+c)%3==0){
result=a+(b/3)+((b%3)+c)/3;}

else{

result=a+1+(b/3)+((b%3)+c)/3;}
cout<<result<<endl;

}
    
    
    return 0;
}
