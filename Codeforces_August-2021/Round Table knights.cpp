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
} 
void solve(){   
  //freopen("input.txt", "r", stdin);
  ll n;
  cin>>n;
  ll arr[n];
  
  for (ll i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  for (ll i = 1; i <=n/3 ; i++)
  {
    if(n%i==0){
        for(ll j =0; j<i; j++){
          ll sum=0;
          for(ll k =j; k<n; k+=i)
            if(arr[k]==1){
              sum++;
            }
          
          if(sum==n/i){
            yes
            return;
          }
        }
    }
  }
    no
	}
int main(){
     speed();

       solve();  
     
     return 0;
}