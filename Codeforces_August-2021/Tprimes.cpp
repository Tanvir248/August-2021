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
}
void solve(){   
  // freopen("input.txt", "r", stdin);
  lln n, arr[N];
     cin>>n;
     for(lln i=0; i<n; i++){
          cin>>arr[i];
     }
     ls s;
     
     ll cnt=0;
     bool flag = false;
     for (ll i = 0; i < n; i++)
     {
          lln x = (arr[i]/2)+1;
         // cout<<x<<" ";
          for(ll j = 2; j<=x; j++){
               if(arr[i]%j==0){
                   // cout<<j<<" ";
                    cnt++;
                    if(cnt>1){
                   no
                   flag = true;
                   cnt=0;
                              break;
                    }
               }
          }
          if(cnt==0 && flag != true){
               no
          }
          else if(cnt==1){
               yes 
               cnt =0;
          }
     }
    
}
int main(){
     speed();

       solve();  
     
     return 0;
}