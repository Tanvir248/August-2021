
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
 //  freopen("input.txt", "r", stdin);
   ls s;
   cin>>s;
   ll n;
   cin>>n;
   sort(s.B, s.E);
   if(s.sz<=n){
      cout<<0<<endl;
      return;
   }else{
     ll cnt=1;
     ls ans;
     for (ll i = 0; i < s.sz-n; i++)
     {
          if(s[i]!= s[i+1]){
              cnt++;
            ans.pb(s[i]+1);
          }
     }
     ls x, y, z;
     if(cnt>1){
       cnt-=1;
        for (ll i = 0; i <ans.sz; i++)
        {
          for(ll j =0; j<s.sz; j++){
              if(ans[i]==s[j]){
                  x.pb(s[j]);
              }
          }
        }
     }else if(cnt==1){
        for (ll i = 0; i <s.sz; i++)
        {
          if(s[0]==s[i]){
              y.pb(s[i]);
          }
        }
        
     }
     cout<<cnt<<endl;
     z = x+y;
     sort(z.B, z.E);
     cout<<z<<endl;
     
   }

}
int main(){
     speed();

       solve();  
     
     return 0;
}