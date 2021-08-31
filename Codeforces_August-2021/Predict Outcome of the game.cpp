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
#define yes cout<<"yes"<<endl;
 #define no cout<<"no"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
int solveFaster(lln n, lln k, lln d1, lln d2) {
      if (n % 3 != 0) {
            return 0;
      }
 
      for (int sign1 = -1; sign1 <= 1; sign1++) {
            for (int sign2 = -1; sign2 <= 1; sign2++) {
                  if (sign1 == 0 || sign2 == 0) {
                        continue;
                  }
                  lln D1 = d1 * sign1;
                  lln D2 = d2 * sign2;
 
                  lln x2 = (k - D1 + D2) / 3;
                  if ((k - D1 + D2) % 3 != 0) {
                        continue;
                  }
                  if (x2 >= 0 && x2 <= k) {
                        lln x1 = D1 + x2;
                        lln x3 = x2 - D2;
                        if (x1 >= 0 && x1 <= k && x3 >= 0 && x3 <= k) {
                              if (x1 <= n / 3 && x2 <= n / 3 && x3 <= n / 3) {
                                    assert(abs(x1 - x2) == d1);
                                    assert(abs(x2 - x3) == d2);
                                    return true;
                              }
                        }
                  }
            }
      }
 
      return false;
}
 
int main() {
speed();
  // freopen("input.txt", "r", stdin);
	ll t;
	cin >> t;
	
	while (t--) {
	lln n, k, d1, d2;
		cin >> n >> k >> d1 >> d2;
	
		int ans = solveFaster(n, k, d1, d2);
		if (ans == 1)
      yes
		else 
      no
	}
	
      return 0;
}