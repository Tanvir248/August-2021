#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int len;
string rev_ans;
void reverse_string(string s, int i){
   if(i != len){
      i++;
       reverse_string(s, i);
       }
   rev_ans.push_back(s[i]); 
      if(i==len-1){
         return;
      }
}  
int main(){
   freopen("input.txt", "r", stdin);

   string s;
   cin>>s;
   len = s.size(); 
   reverse_string(s, 0);
   cout<<rev_ans<<endl;
}