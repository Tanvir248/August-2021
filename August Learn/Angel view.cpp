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
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(1e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
const double pi = acos(-1), eps = 1e-9;
void solve(){   
   freopen("input.txt", "r", stdin);
ld angle[N];
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        angle[i] = atan2(y, x);
        if (angle[i] < -eps) 
        angle[i] += 2 * pi;
    }
    sort(angle, angle + n);

    ld ans = angle[n - 1] - angle[0];
    
    for (ll i = 0; i < n-1; i++)
    {
        ld cur = 2 * pi - (angle[i + 1] - angle[i]);
        if (cur < ans) 
        ans = cur;
    }
    cout<<fixed<<setprecision(10)<<(ld)ans*180/(ld)pi<<endl;
}
int main(){
     speed();

       solve();  
     
     return 0;
}