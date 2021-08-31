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
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
const int N = (int) 1e5 + 123;
const int C = 101;
const int P = 11;
 
int n, q, c;
int cnt[P][C][C];
 
void solve() {
     //freopen("input.txt", "r", stdin);


    for (int i = 0; i < n; i++) {
        int x, y, s;
        cin>>x>>y>>s;
        cnt[s][x][y]++;
    }
    
    for (int p = 0; p <= c; p++) {
        for (int i = 1; i < C; i++) {
            for (int j = 1; j < C; j++) {
                cnt[p][i][j] += cnt[p][i - 1][j] + cnt[p][i][j - 1] - cnt[p][i - 1][j - 1];
            }
        }
    }
    
    for (int i = 0; i < q; i++) {
        int t, x1, y1, x2, y2;
        cin>>t>>x1>>y1>>x2>>y2;
        int ans = 0;
        for (int p = 0; p <= c; p++) {
            int brightness = (p + t) % (c + 1);
            int amount = cnt[p][x2][y2] - cnt[p][x1 - 1][y2] - cnt[p][x2][y1 - 1] + cnt[p][x1 - 1][y1 - 1];
            ans += brightness * amount;
        }
        cout<<ans<<endl;
      }
    }
    int main(){
      speed();
      cin>>n>>q>>c;
      solve();
  return 0;
    }