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
ll solve(ll n, ll m){   
   //freopen("input.txt", "r", stdin);
   ll j;
  ls s[n];
  for (ll i = 0; i < n; i++)
  {
    cin>>s[i];
  }
  ll cnt =0;
  for (ll i = 0; i < n-1; i++)
  {
    if(s[i]>s[i+1]){
      for(j =0; j<m; j++){
        if(s[i][j]>s[i+1][j]){
          break;
        }
      }
      for(ll k =0; k<n; k++){
          s[k][j]='a';
      }
      cnt++;
       i =-1;
    }
  }
  
  return cnt;
}
int main(){
     speed();
ll a, b;
cin>>a>>b;
      cout<< solve(a, b);  
     ed
     return 0;
}