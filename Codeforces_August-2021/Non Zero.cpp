
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
   //freopen("input.txt", "r", stdin);
   ll n, sum =0, zero=0;
   cin>>n;
   ll arr[n];
   for (ll i = 0; i < n; i++)
   {
     cin>>arr[i];
     if(arr[i]==0)
     zero++;
   sum+=arr[i];
   }
if(zero == 0){
    if(sum==0){
      cout<<1;
    }else{
      cout<<0;
    }
}else{
  ll len = zero;
  sum+=zero;
  if(sum==0){
    cout<<len+1;
  }else{
    cout<<len;
  }
  
}
ed   
}
int main(){
     speed();
ll t;
cin>>t;
while(t--)
       solve();  
     
     return 0;
}