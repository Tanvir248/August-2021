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
const int N = int(1e6 + 100);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln a[N], b[N], d[N], lx[N], rx[N], c[N];
int l, r, n, m, k;
void solve(){   
  // freopen("input.txt", "r", stdin);
	cin>>n>>m>>k;
    for (int i = 1; i <= n; i++)
			cin>>a[i];
    for (int i = 1; i <= m; i++) cin>>lx[i]>>rx[i]>>d[i];
    for (int i = 1; i <= k; i++){
        cin>>l>>r;
        c[l - 1] += 1; c[r] -= 1;
    }
    lln t = 0;
    for (int i = 0; i <= m; i++){
        d[i] *= t;
        t += c[i];
    }
    t = 0;
    for (int i = 0; i <= m; i++){
        b[lx[i] - 1] += d[i];
        b[rx[i]] -= d[i];
    }
    for (int i = 0; i <= n; i++){
        a[i] += t; 
		t += b[i];
    }
    for (int i = 1; i<= n; i++)
	 cout<<a[i]<<" ";
    ed
}
int main(){
     speed();

       solve();  
     
     return 0;
}