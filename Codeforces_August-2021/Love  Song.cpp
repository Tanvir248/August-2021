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
void solve(){   
   //freopen("input.txt", "r", stdin);
 ll n, m;
 cin>>n>>m;
 ls s;
 cin>>s;
  ll a[n+1];
  a[0]=0;
  for (ll i = 1; i <= n; i++)
  {
    a[i]=a[i-1]+(s[i-1]-'a'+1);
  }
   while (m--)
   {
     int x, y;
     cin>>x>>y;
     cout<<a[y]-a[x-1]<<endl;
   }
   
}
int main(){
     speed();

       solve();  
     
     return 0;
}