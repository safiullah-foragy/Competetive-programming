#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int x,y,n;
        cin>>x>>y>>n;
       // cout<<n;
        int arr[n];
        arr[0]=x;
        arr[n-1]=y;
        int m=1,c=0;


        for(int i=n-2;i>0;i--)
        {
            if(m<(arr[i+1]-m)-arr[0]){
           arr[i]=arr[i+1]-m;m++; }
else{cout<<"-1"<<endl;break;}
            //if(m<(arr[i+1]-m)-arr[0]){cout<<"-1"<<endl;break;}
         //if(arr[i+1]-m>arr[0]&&m==n-1){c=1;break;}
         if(m==n-1){c=1;break;}

        }


if(c==1){
   for(int j=0;j<n;j++){cout<<arr[j]<<" ";}


}
cout<<endl;

    }


    return 0;
}
