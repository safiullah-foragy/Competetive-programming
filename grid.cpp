#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{

    int a,b;
    cin>>a>>b;
    if(a==0&&b==0){cout<<"0"<<endl;continue;}
    int result,res;
    if(b%2==0){result=b/2;}
    else{result=(b/2)+1;}

    if(b==0){if(a%15==0){cout<<a/15<<endl;continue;}

    else{cout<<(a/15)+1<<endl;continue;}}
   
   if(result*15>=b*4+a){cout<<result<<endl;continue;}
   
else{
res=a-(result*15-b*4);

if(res%15==0){cout<<result+res/15<<endl;continue;}

else{cout<<result+(res/15)+1<<endl;continue;}



}

  
}

    return 0;
}