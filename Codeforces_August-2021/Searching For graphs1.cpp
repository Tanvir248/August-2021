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
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
} vector<pair<int, int>>ans;
void solve(){   
 //  freopen("input.txt", "r", stdin);
  ll t;
  cin>>t;
  while (t--)
  {
	  ll a, b;
	  cin>>a>>b;
	  ll x = min(a, b);
	  ll y =max(a, b);
	  ll st = y/2;
	  if(y%2 !=0){
		  st=y-1;
	  }
	  for (ll i = x+1; i <= st; i++)
	  {
		  for(ll j =i; j<y; j++){
			  	ans.pb(make_pair(i, j+1));
		  }
	  }
	  
  }
  for(auto &x: ans){
	  cout<<x.first<<" "<<x.second<<endl;
  }
}
int main(){
     speed();

       solve();  
     
     return 0;
}/*ll t;
  cin>>t;
  while (t--)
  {
	 int n,p;
    cin>>n>>p;
	    ll x,y;
        x=1;y=2;
        for(int i=0;i<n*2+p;i++)
        {
           cout<<x<<" "<<y;
            y++;
            if(y==n+1)
            {
                x++;
                y=x+1;
		    }ed
			    }
    }*/