#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcdd(int x, int y){
    if(x==0){
       return y;
 }     if(y ==0){
      return x;
      }
   if(x>y){
      return gcdd(x-y, y);
   }else{
      return gcdd(x,y-x);
   }
}
int main(){
   int a, b;
   cin>>a>>b;
   cout<<gcdd(a, b)<<endl;
}