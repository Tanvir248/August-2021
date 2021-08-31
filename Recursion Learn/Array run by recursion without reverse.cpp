#include <iostream>
#include <stdio.h>
using namespace std;

int arr[8];
void arrary(int x,int i){
     // cout<<x<<" ";
      
      cout<<arr[i]<<" ";
      if(i==x-1){
         return;
      }else{
         arrary(x, i+1);
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
   arrary(c-1, 0);
   return 0;
}