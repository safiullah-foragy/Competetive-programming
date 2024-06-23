#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    int map=0,pie=0;;
    int mpi=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'&&s[i+3]=='i'&&s[i+4]=='e'){mpi++;}

        if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'){map++;}

        if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'){pie++;}
            

    }
    cout<<map-mpi+pie<<endl;

}

    return 0;
}
