#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int flag = 0;
int prime1(int a, int i){
     if(a==2){
        flag = 1;
        return 0;
      }
      if(i<2){
         return 0;
      }
      if(a%i == 0){
        
      flag = 1;
      return 0;
      }else{
         return prime1(a,i-1);
      }
      }
int main(){
 // freopen("input.txt", "r", stdin);

   int n;
   cin>>n;
   int x = n;
   prime1(x, n/2);

   if(flag == 1){
      cout<<" Not Prime."<<endl;
   }else{
      cout<<"Prime."<<endl;
   }
}