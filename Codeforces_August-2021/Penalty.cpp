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
   //freopen("input.txt", "r", stdin);
   int t;
	cin >> t;
	while (t--) {
		ls s;
		cin >> s;
		int ans = 9;
		
		{
			int cnt0 = 0, cnt1 = 0;
			for (int i = 0; i < 10; ++i) {
				if (i % 2 == 0) cnt0 += s[i] != '0';
				else cnt1 += s[i] == '1'; 
				if (cnt0 > cnt1 + (10 - i) / 2) ans = min(ans, i);
				if (cnt1 > cnt0 + (9 - i) / 2) ans = min(ans, i);
			}
		}
		
		{
			int cnt0 = 0, cnt1 = 0;
			for (int i = 0; i < 10; ++i) {
				if (i % 2 == 0) cnt0 += s[i] == '1';
				else cnt1 += s[i] != '0'; 
				if (cnt0 > cnt1 + (10 - i) / 2) ans = min(ans, i);
				if (cnt1 > cnt0 + (9 - i) / 2) ans = min(ans, i);
			}
		}
		
		cout << ans + 1 << '\n';
	}
}
int main(){
     speed();

       solve();  
     
     return 0;
}