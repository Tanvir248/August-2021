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
ll n, m;
pi p;
vector<pi> v[109];
void solve(){   
  // freopen("input.txt", "r", stdin);

	cin >> n >> m;
	for(ll i =1; i<=n; i++){
     v[i].eb(i, i);
     }
for (ll i = 0; i < m; i++)
{
		cin >> p.first >> p.second;
		v[p.first].eb(p.first, ++n);
		v[p.second].eb(p.second,n);
	}
for(ll i= 1; i<108; i++) if(v[i].size())
	{
		cout << v[i].size() << endl;
		for(auto j:v[i]) cout << j.first << " " << j.second << endl;
	}
}
int main(){
     speed();

       solve();  
     
     return 0;
}