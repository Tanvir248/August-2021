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
//#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
 #define sz(x) (int) x.size()
//const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

ll n, a, b;

const int N = 1000000;

mi ady;
mi::iterator it;
vi v(2 * N + 5, -1);
ll x = N + 1;

vi bfs(vi roots) {
  vi results;
  queue<int> q;
  for (int i = 0; i < sz(roots); ++i) {
    q.push(roots[i]);
  }
  while (!q.empty()) {
    ll x = q.front();
    q.pop();
    if (x <= N) {
      results.pb(x);
    }
    if (ady[x]) {
      q.push(ady[x]);
    }
  }
  return results;
}

int main() {
  // freopen("input.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> a >> b;
      if (b != 0) {
        ady[x] = b;
        v[b] = x;
      }
      if (a != 0) {
        ady[a] = x;
        v[x] = a;
      }
      ++x;
    }
    vi roots;
    for (it = ady.begin(); it != ady.end(); ++it) {
      if (v[it->first] == -1) {
        roots.pb(it->first);
      }
    }
    vi results = bfs(roots);
    for (int i = 0; i < sz(results); ++i) {
      cout << results[i] << (i + 1 < sz(results) ? " " : "\n");
    }
    return 0;
}
