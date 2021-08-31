#include<bits/stdc++.h>
using namespace std;
int number(int n){
    if(n==1) return 1;
      
       // cout<<n<<" ";

    return n+number(n-1);
}
int main(){
    cout<<number(15)<<endl;
}