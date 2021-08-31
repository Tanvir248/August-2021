#include<iostream>
using namespace std;
int n, i=0;
   int mx =-1;
void array(int x[]){
if(i==n-1){
   return;
}
   if(x[i]>mx){
      mx = x[i];
   }
   i++;
   array(x);
}
int main(){
      freopen("input.txt", "r", stdin);

   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }
   array(arr);
   cout<<mx<<endl;
}