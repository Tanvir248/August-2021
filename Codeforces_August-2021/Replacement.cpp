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
void solve(){   
 //  freopen("input.txt", "r", stdin);
   ll n;
   cin>>n;
   vi add(n);
   for(auto&x:add){
     cin>>x;
   }
   sort(add.B, add.E);  
    ll nn = *max_element(add.B, add.E);
    if(nn==1) 
  {
    add[n-1]+=1;
  }else
      add[n-1]=1;
   bool x =false;
      sort(add.B, add.E);

  
  for (ll i = 0; i < add.sz; i++)
  {
    cout<<add[i]<<" ";
  }
   ed
}

int main(){
     speed();

       solve();  
     
     return 0;
}