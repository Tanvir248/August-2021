#include <iostream>
#include <stdio.h>
using namespace std;

int arr[8];
void arrary(int x){
     // cout<<x<<" ";
      cout<<arr[x]<<" ";
      if(x==0){
         return;
      }else{
         arrary(x-1);
      }
}
int main() {
      freopen("input.txt", "r", stdin);
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }
   int c =sizeof(arr)/4;
   arrary(c-1);
   return 0;
}