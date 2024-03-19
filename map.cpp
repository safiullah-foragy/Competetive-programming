#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int,int>mp;//decleration
mp.insert({1,10});//insertion
mp.insert({2,20});
mp.insert({3,30});
mp[4]=40;//another insertion
//printing map;
cout<<mp.at(4)<<endl;//or cout<<mp[i]
/*printing whole map
for(auto it:mp)
{cout<<it.first<<it.second}*/
    return 0;
}