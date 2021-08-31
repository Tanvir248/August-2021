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
const int N = int(5e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll a[N], b[N];
void solve(){   
  //freopen("input.txt", "r", stdin);
   int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", a + i);
	int res = 0;
	for (int i = 1; i < n - 1; ++i) {
		if (a[i] == a[i - 1] || a[i] == a[i + 1])
			b[i] = a[i];
		else {
			int j = i;
			while (j < n - 1 && a[j] != a[j + 1])
				++j;
			res = max(res, (j - i + 1) / 2);
			for (int x = i; x < j; ++x) {
				if (x - i < j - x)
					b[x] = a[i - 1];
				else
					b[x] = a[j];
			}
			i = j - 1;
		}
	}
	b[0] = a[0];
	b[n - 1] = a[n - 1];
	printf("%d\n", res);
	for (int i = 0; i < n; ++i)
		printf("%d ", b[i]);
}
int main(){
     speed();

       solve();  
     
     return 0;
}