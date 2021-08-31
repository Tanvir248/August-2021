#include <iostream>
#include <stdio.h>
using namespace std;

int cnt=0;
int arrary(long long x){
   int a= x%10;
    x = x/10;
cnt++;
    if(x==0)
         return 0;
         else
            return arrary(x);      
}
int main() {
      freopen("input.txt", "r", stdin);
   long long n;
   cin>>n;
  arrary(n);
  cout<<cnt;
   return 0;
}