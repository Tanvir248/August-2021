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
ll ans;
ll solve(){   
  // freopen("input.txt", "r", stdin);
   ll n,a, b;
   cin>>n>>a>>b;
   ll arr[n];
   for (ll i = 1; i <= n; i++)
   {
      cin>>arr[i];
   }
   for (ll i = 0; i <= n; i++)
   {  
     ll l =i, r =i+1, prel, prer,cntans = b, cnt=1;
    while(true){
        prel =l, prer =r;

            while(l&&arr[l]==cntans){
              l--;
              cnt++;
            }
            while(r<=n&&arr[r]==cntans){
              r++;
              cnt++;
              }

            if(cnt<=2){
              l=prel;
              r=prer;
              break;
              }else{
               cntans=arr[l],
               cnt=0;}
    }
      ans = max(ans, r-l-1);
   }
   return ans;
   
}
int main(){
     speed();

   cout<<solve();  
     ed
     return 0;
}