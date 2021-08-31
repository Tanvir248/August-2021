#include <iostream>
#include <stdio.h>
using namespace std;

int cnt=0;
int arrary(int x){
   cnt += x%10;
    x = x/10;

    if(x==0)
         return 0;
         else
            return arrary(x);      
}
int main() {
      freopen("input.txt", "r", stdin);
   int n;
   cin>>n;
  arrary(n);
  cout<<cnt;
   return 0;
}