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

#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(1e6 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}ll sol[N];
ll solve(){   
   //freopen("input.txt", "r", stdin);
  ll n;
  cin>>n;
  ll arr[N];
  for (ll i = 1; i <= n; i++)
  {
	  cin>>arr[i];
  }
  sol[0]={0};
  for (ll i = 1; i <= n; i++)
  {
	  sol[i]= sol[i-1]^i;
  }
  ll ans = arr[1];
  for (ll i = 2; i <= n; i++)
  {
	  ans^=arr[i];
  }
  
  for (ll i = 1; i <= n; i++)
  {
	  ll size = n/i;
	  if(size&1){
		  ans ^= sol[i-1];
	  }
	  if(n%i){
		  ans^= sol[n%i];
	  }
  }
  return ans;
}
int main(){
     speed();

       cout<<solve();  
     ed
     return 0;
}