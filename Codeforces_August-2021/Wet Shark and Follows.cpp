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
const int N = int(1e5 + 7);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln p,n;
double ans = 0;
struct node
{
    lln t;
    lln l;
    }a[N];
void solve(){
  //  freopen("input.txt", "r", stdin);
   
  cin>>n>>p;
    lln x,y;
    for(int i = 1;i <= n;++i)
    {
  cin>>x>>y;
      a[i].t = (y)/p - (x-1)/p;
        a[i].l = y - x + 1;
        }
    for(int i = 1;i < n;++i)
    {
        lln r1 = a[i].t * a[i+1].l;
        lln r2 = a[i+1].t * (a[i].l - a[i].t);
        ans += (double)(r1 + r2) * 2000.0 / (a[i].l * a[i+1].l);
        }
    lln r1 = a[n].t * a[1].l;
    lln r2 = a[1].t * (a[n].l - a[n].t);
    ans += (double)(r1 + r2) * 2000.0 / (a[n].l * a[1].l);
  cout<<fixed<<setprecision(1)<<ans<<endl;
  }
int main()
{ 
  speed();
  solve();
    
    return 0;
}
