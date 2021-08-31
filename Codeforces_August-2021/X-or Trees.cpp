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
const int N = int(1e5 + 1);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
bool visited[N];
vi add, val[N];
ll given[N], fnd[N]; 
void dfs(ll source, ll n_odd, ll n_eve){   
   visited[source]= true;

   if((given[source]^n_odd)!= fnd[source]){
	   add.pb(source);
	   n_odd^= 1;
   }
	for (ll i = 0; i < val[source].sz; i++)
	{
			ll next = val[source][i];
			if(!visited[next]){
					dfs(next, n_eve, n_odd);
			}
	}
	
}
void printans(){
	cout<<add.sz<<endl;
	for (ll i = 0; i < add.sz; i++)
	{
		cout<<add[i]<<endl;
	}
	
}
int main(){
     speed();
ll n, t, u,v;
// freopen("input.txt", "r", stdin);
  
cin>>n;
t =n-1;
	while(t--){
			cin>>u>>v;
			val[u].pb(v);
			val[v].pb(u);
	}
for (ll i = 1; i <= n; i++)
{
	cin>>given[i];
}
for (ll i = 1; i <= n; i++)
{
	cin>>fnd[i];
}
memset(visited,false,sizeof(visited));
    dfs(1,0,0);  

     printans();
     return 0;
}