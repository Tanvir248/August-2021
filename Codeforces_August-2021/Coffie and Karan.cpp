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
   ll n, k, q;
  cin >> n >> k >> q;
  vi f(N);
  while (n--) {
    int l, r;
    cin >> l >> r;
    f[l]++;
    f[r + 1]--;
  }
  int cnt = 0;
  for (int i = 0; i < f.sz; i++) {
    cnt += f[i];
    f[i] = (cnt >= k) ? 1 : 0;
  }
  vi p(N);
  for (int i = 1; i < p.sz; i++) {
    p[i] = f[i - 1] + p[i - 1];
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << p[r + 1] - p[l] << endl;
  }
}
int main(){
     speed();

       solve();  
     
     return 0;
}