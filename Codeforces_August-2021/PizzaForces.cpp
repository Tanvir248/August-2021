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
ll t;
void solve(){   
  // freopen("input.txt", "r", stdin);
   
  for (ll i = 0; i < t; i++)
  {
       lln num;
       cin>>num;
       cout<< max(6LL, num+1)/2*5<<endl;
  }
  
}
int main(){
     speed();
cin>>t;
       solve();  
  
     return 0;
}