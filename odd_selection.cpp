#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--)
{
int n,x;
cin>>n>>x;
vector<int>v(n);
int even=0,odd=0;
for(auto &i:v)
{
    cin>>i;
    if(i%2==0){even++;}
    else{odd++;}
}
if(odd>=x&&x%2!=0){cout<<"Yes"<<endl;continue;}

if(odd==0){cout<<"No"<<endl;continue;}
if(even==0&&x%2==0){cout<<"No"<<endl;continue;}

int od;

    if(odd%2==0){od=odd-1;}
    else{od=odd;}


if((x-od<=even)){cout<<"Yes"<<endl;continue;}

cout<<"No"<<endl;



}


    return 0;
}