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
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
int solve(ll n){   
//  freopen("input.txt", "r", stdin);
  ll cnt =1;
  ll ans =0;
  while (n>0)
  {
      ans++;
      n-=cnt;
      cnt+=2;
  }
  return ans;

 }
int main(){
     speed();
ll a, t;
cin>>t;
while(t--){
cin>>a;

       cout<<solve(a);  
     ed
     }
     return 0;
}