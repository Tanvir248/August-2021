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
void solve(){   
  // freopen("input.txt", "r", stdin);
   ll n, m;
   cin>>n>>m;
   ls s, ip;
 vector<pair<ls, ls>>pii,st, ans;
      for (ll i = 0; i < n; i++){
        cin>>s>>ip;
      pii.pb(make_pair(s, ip));
      s.clear();
      ip.clear();
   }
   ls s1, ip1, x;
   for (ll i = 0; i < m; i++){
        cin>>s1>>ip1;
        for (ll j = 0; j <ip1.sz-1; j++)
        {
          x.pb(ip1[j]);
        }
        
      st.pb(make_pair(s1, x));
    x.clear();
    s1.clear();
    ip1.clear();
   }
  vector<ls>add, add1;
   ll cnt=0;
   for(auto &x:st){
     for(auto &k: pii){
       if(x.second==k.second){
         ans.pb(make_pair(x.first, x.second));
      add.pb(k.first);
      break;
       }
     }
   }
   for(auto l:ans){
cout<<l.first<<" "<<l.second<<";"<<" #"<<add[cnt]<<endl;
cnt++;
   }
}
int main(){
     speed();

       solve();  
     
     return 0;
}