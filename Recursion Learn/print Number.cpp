#include<bits/stdc++.h>
using namespace std;
void number(int n){
     if(n == 51) return;
    n = n+1;
    cout<<n<<" "; 
    number(n);
     
}
int main(){
     number(0);
}
/*#include<bits/stdc++.h>
using namespace std;
int number(int n){
    if(n==50) return 50;
      
        cout<<n<<" ";

    return number(n+1);
}
int main(){
    number(1);
}*/