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
void solve(ll n){   
   //freopen("input.txt", "r", stdin);
   vi v(n);
  for (auto &e : v) {
    cin >> e;
  }
  int left = 0, right = n - 1;
  vi ans(n);
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      ans[i] = v[left++];
    } else {
      ans[i] = v[right--];
    }
  }
  for (auto &i : ans) {
    cout << i << " ";
  }
  cout << "\n";
}
int main(){
     speed();
ll t;
cin>>t;
while(t--){
ll a;
cin>>a;
       solve(a);  
}
     return 0;
}