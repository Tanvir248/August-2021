#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
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
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
bool isEven(ll a){
    if(a%2==0){
            return true;
    }
    return false;
}
void solve(){   
  // freopen("input.txt", "r", stdin);
   ll n;
   cin>>n;
   if(isEven(n)){
        no
   }else{
       vi add(n*2);
       ll ansx =4;
       add[0]=1, add[n]=2;
       for (ll i = 0; i < n; i++)
       {
           if(isEven(i)){
                add[i+1]=ansx, add[i+1+n]=ansx-1;
           }else{
               add[i+1]= ansx-1, add[i+1+n]=ansx;
           }
           ansx+=2;
       }
       yes
       for (ll i = 0; i <add.sz; i++)
       {   
            cout<<add[i]<<" ";
       }
       ed
       
   }
}
int main(){
     speed();

       solve();  
     
     return 0;
}