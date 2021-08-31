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
const int N = int(200 * 1000 + 13);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

lln n, k;
lln a[N];

void read() {	
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
}

 void solve() {
	sort(a, a + n);
	reverse(a, a + n);
	lln ans = 0;
	for (int i = 0; i <= k; i++) {
		ans += a[i];
	}
	cout << ans << endl;
}

int main () {
    lln t;
     cin >> t;
    while(t--) {
    	read();
    	solve();
 	}
}