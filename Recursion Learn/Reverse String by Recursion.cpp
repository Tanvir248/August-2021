#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
string ans;
void rev(string s, int i){
if(i==0){
   return;
}else {
   ans.push_back(s[i]);
   i--;
   rev(s, i);
}
 
}
int main(){
      freopen("input.txt", "r", stdin);

   string s;
   cin>>s;
   int sz = s.size();
   rev(s, sz-1);
   cout<<ans<<endl;
}