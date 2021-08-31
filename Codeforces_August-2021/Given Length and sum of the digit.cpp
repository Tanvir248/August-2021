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
     int m, s, t, i;
void solve(){   
   //freopen("input.txt", "r", stdin);

    cin >> m >> s;
    string a, b;

    if (s == 0)
    {
        cout<<(m == 1 ? "0 0" : "-1 -1");
       ed
	   return;
    }

    for (i = 0; i < m; i++)
    {
        t = min(s, 9);
        b += t + '0';
        s -= t;
    }

    if (s > 0)
    {
        cout<< "-1 -1";ed
		return;
    }

    for (i = m - 1; i >= 0; i--)
        a += b[i];

    for (i = 0; a[i] == '0'; i++);

    a[i]--, a[0]++;
    cout << a << " " << b << endl;
}
int main(){
     speed();

      solve();  
     
     return 0;
}