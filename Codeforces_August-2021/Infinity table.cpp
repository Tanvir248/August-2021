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
   int t;
	cin >> t;

	while (t--)
	{
		int k;
		cin >> k;

		int a = 1;
		int x = 1;
		int i = 1;

		while (k >= x + a)
		{
			x += a;
			a += 2;
			i += 1;
		}

		int m = k - x + 1;
		if (m <= i)
			cout << m << ' ' << i << '\n';
		else
			cout << i << ' ' << (i - (m - i)) << '\n';
	}
}
int main(){
     speed();

       solve();  
     
     return 0;
}