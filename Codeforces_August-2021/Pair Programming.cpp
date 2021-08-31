#include<bits/stdc++.h>
using namespace std;
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
  // freopen("input.txt", "r", stdin);
    ll t;
    cin >> t;
    while (t--) {
        ll k, n, m;
        cin >> k >> n >> m;

        vi a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        int pos1 = 0, pos2 = 0;
        vi res;
        bool flag = true;
        while (pos1 != n || pos2 != m) {
            if (pos1 != n && a[pos1] == 0) {
                res.push_back(0);
                k++;
                pos1++;
            } else if (pos2 != m && b[pos2] == 0) {
                res.push_back(0);
                k++;
                pos2++;
            } else if (pos1 != n && a[pos1] <= k) {
                res.push_back(a[pos1++]);
            } else if (pos2 != m && b[pos2] <= k) {
                res.push_back(b[pos2++]);
            } else {
             cout << -1 << '\n';
                flag = false;
                break;
            }
        }

        if (flag){
            for (int cur : res)
             cout << cur << ' ';
            ed
        }
    }
}
int main(){
     speed();

       solve();  
     
     return 0;
}