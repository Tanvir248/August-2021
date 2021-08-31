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
const int N = int(1e2 + 10);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll n;
ll a[N];
void solve(){   
  // freopen("input.txt", "r", stdin);
   int t;
    cin>>t;
    while(t--){
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int res=a[1];
    for(int i=2;i<=n;i++)
    res&=a[i];
    cout<<res<<endl;
    }
}
int main(){
     speed();

       solve();  
     
     return 0;
}