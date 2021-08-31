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
#define pi pair<string, int>
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
  freopen("input.txt", "r", stdin);
 vector<ls>sol,add, ans, temp, temp1,vx;
 vector<pair<string, int>>pin;
 ll n;
 cin>>n;
 ls s;
   while (n--)
   {
     cin>>s; 
  add.pb(s);
  temp.pb(s);
   }
   ll cnt=0;
   if(add.sz==1){
      cout<<"OK"<<endl;
      return;
   }else if(add.sz==2){
      if(add[0]!= add[1]){
        cout<<"OK"<<endl<<"OK"<<endl;
      }else{
          cout<<"OK"<<endl<<add[1]+to_string(1)<<endl;
      }
      return;
   }
  sort(temp.B, temp.E);
  for (ll i = 0; i < temp.sz; i++)
  {
    if(temp[i]==temp[i+1]){
        cnt++;
       temp1.pb(temp[i+1]);
    }else
      temp1.pb("OK");
    }
  for (ll i = 0; i < temp1.sz; i++)
  {
    if(temp1[i]!= "OK"){
        sol.push_back(temp1[i]);
    }
  }
  ll cnt1 =-1;
  for (ll i = 0; i < sol.sz; i++)
  {
   for (ll j = 0; j < add.sz; j++)
   {
     if(sol[i]==add[j]){
       cnt1++;
       if(cnt1>0){
         pin.pb(make_pair(add[j]+to_string(cnt1),j));
       }
     }
   }cnt1 =-1;
   
  }vi px;

  for(auto&x:pin){
    vx.pb(x.first);
  px.pb(x.second);    
  }
  ll tmp =0;
  for (ll i = 0; i <add.sz; i++)
  {
    if(i==px[tmp]){
        ans.pb(vx[tmp]);
    tmp++;
    }else{
      ans.pb("OK");
    }
  }
  for (ll i = 0; i < ans.sz; i++)
  {
    cout<<ans[i]<<endl;
  }
  
}
int main(){
     speed();

       solve();  
     
     return 0;
}