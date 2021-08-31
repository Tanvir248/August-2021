#include<bits/stdc++.h>
using namespace std;
int fun(int n){
      cout<<"("<<n<<" "<<n-1<<")";
     if(n==1) return 1;
     
  
    return n* fun(n-1);
  
}
int main(){
     cout<<fun(4);
}