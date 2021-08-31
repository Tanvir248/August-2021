#include<bits/stdc++.h>
using namespace std;
int main(){
  map<string, int>mp;
  int n, t;
  string s;
  cin>>t;
    for (int i = 0; i <t; i++)
    {
        cin>>s;
       if(mp.count(s)==0){
           cout<<"Unque UserName"<<endl;
           mp[s]=1;
       }else{
           cout<<"Suggested : "<<s<<mp[s]<<endl;
           mp[s]+=1;
       }
    }
   // reverse(mp.begin(), mp.end());
    // for (auto &x : mp)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    
 return 0;
}
