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
const int N = int(110);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
pi add[N];
bool vis[N];
ll t;
void dfs(int source){   
   //freopen("input.txt", "r", stdin);
	vis[source]=1;
	for (ll i = 0; i < t; i++)
	{
	if(!vis[i] && (add[source].first==add[i].first || add[source].second==add[i].second)){
		dfs(i);
	}
	}
}
int main(){
     speed();
	freopen("input.txt", "r", stdin);

	ll node, edge;
	cin>>t;
	for (ll i = 0; i < t; i++)
	{
			cin>>node>>edge;
			add[i]={node, edge};		
	}
		ll ans =0;
    memset(vis,0,sizeof(vis));
		for (ll i = 0; i < t; i++)
		{
			if(!vis[i]){
				ans++;
					dfs(i);
			}
		}
		
cout<<ans-1<<endl;
     return 0;
}