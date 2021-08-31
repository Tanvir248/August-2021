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
   //freopen("input.txt", "r", stdin);
   ll x, y;
   cin>>x>>y;
    for (ll i = 1; i < x; i++)
    {
        ll a = sqrt(x*x-i*i);
        if(x*x == i*i+a*a){
                ll b1 = i*y/x;
                ll b2 = a*y/x;
                if(y*y == b1*b1+b2*b2 && a!=b1){
                    yes
                    cout<<0<<" "<<0<<endl;
                    cout<<i<<" "<<a<<endl;
                    cout<<-(b2)<<" "<<b1<<endl; 
              return;  
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