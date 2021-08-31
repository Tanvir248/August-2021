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
vi add;
ll solve(ll a, ll b){   
  
			ll mx =-1;
		for (ll i = 0; i < add.sz; i++)
		{
			if(a<=add[i]&& add[i]<=b){
				mx = max(mx, add[i]);
			}
		}
	
	return mx;		
}
int main(){
     speed();
	 //   freopen("input.txt", "r", stdin);

 ll x, y;
   cin>>x>>y;
   ll gd = __gcd(x, y);
		for (ll i = 1; i*i <= gd; i++)
		{
			if(gd%i==0){
					add.pb(i);
			}
			if(gd/i !=i && gd%i==0){
				add.pb(gd/i);
			}
		}
		ll t;
		cin>>t;
		while (t--)
		{
			ll a, b;
			cin>>a>>b;
       cout<<solve(a, b);  
		ed}     
     return 0;
}