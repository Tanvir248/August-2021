#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
lln a, b;
lln Bmod(){
    lln x=0, f=1; 
    char ch=getchar(); 
     while(ch<'0'|| ch>'9'){      
         if(ch=='-') 
         f=-1;
          
          ch=getchar();
    }    
     while(ch>='0'&&ch<='9') {
        x=x*10+ch-'0';
     ch=getchar();
  }   
       return x*f;
  }
int main(){
    a=Bmod();
    b=Bmod();
a=(b*(a*(a+1)/2%MOD)%MOD+a)%MOD;
    b= ((b* (b-1))/2)%MOD;    
  cout<<(a*b)%MOD<<endl;
 return 0;
 }