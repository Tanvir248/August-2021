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
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(10000000);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll minimum (ll x, ll y){
     if(x>y){
          return y;
     }else{
          return x;
     }
}lln arr[N],sum =0;
void solve(){   
   //freopen("input.txt", "r", stdin);
  lln n, a;
 cin>>n>>a;
  
  for (lln i = 0; i < n; i++)
  {
       cin>>arr[i];
     sum+=arr[i];
  }
  for (lln i = 0; i < n; i++)
  {
       lln mn = max(1LL, a-(sum-arr[i]));
       lln mx = minimum(arr[i], a-(n-1));
       lln ans =arr[i]-(mx -mn+1);
       cout<<ans<<" ";
  }
ed  
  
}
int main(){
     speed();

       solve();  
     
     return 0;
}