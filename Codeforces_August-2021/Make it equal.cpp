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
ll arr[N];
ll solve(){   
   //freopen("input.txt", "r", stdin);
   ll a, b, h;
   cin>>a>>b;
   for (ll i = 0; i < a; i++)
   {
      ll num;
      cin>>num; 
      arr[num]++;
      h= max(h, num);
     
   }
   for (ll i = h; i >= 0; i--)
   {
     arr[i]+=arr[i+1];
   }
   ll ans =0,cnt=0;
   for (ll i = h; i >= 0; i--)
   {
      if(arr[i]==a){
        if(cnt!=0){
          ans++;
          break;
        }else{
          break;
        }
      }
      cnt+=arr[i];
      if(cnt>b){
          cnt =arr[i];
          ans++;
      }
   }
   return ans;
}
int main(){
     speed();

       cout<<solve();  
     ed
     return 0;
}