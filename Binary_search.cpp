#include<bits/stdc++.h>
using namespace std;
int main()
{

int a[5]={1,3,5,7,8};
int x=7;
int result =-1;

int left=0,right=5-1;

while(left<=right)
{
int mid=(left+right)/2;
if(a[mid]==x){result=mid;break;}

if(x<mid){right=mid-1;}
if(x>mid){left=mid+1;}


}


cout<<result<<endl;


    return 0;
}