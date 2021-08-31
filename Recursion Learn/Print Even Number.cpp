#include<bits/stdc++.h>
using namespace std;
int number(int n){
   if(n==0) return 0;
 
  if(n%2==0){
      cout<<n<<" ";
  }
   return number(n-1);
}
int main(){
   number(10);
}