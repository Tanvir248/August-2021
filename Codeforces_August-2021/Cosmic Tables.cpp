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
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = 1001;
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

lln p[N][N], row[N], col[N];
void solve(){   
  // freopen("input.txt", "r", stdin);
   lln n, m, k;
    cin>>n>>m>>k;

    for (int r = 1; r <= n; ++r)
        row[r] = r;

    for (int c = 1; c <= m; ++c)
        col[c] = c;

    for (int r = 1; r <= n; ++r)
        for (int c = 1; c <= m; ++c)
            cin>>p[r][c];

    while (k--)
    {
        char s[2];
        lln x, y;
        cin>>s>>x>>y;
        switch (s[0])
        {
        case 'r':
            swap(row[x], row[y]);
            break;
        case 'c':
            swap(col[x], col[y]);
            break;
        case 'g':
            cout<< p[row[x]][col[y]]<<endl;
            break;
        default:
            break;
        }
    }
}
int main(){
     speed();

       solve();  
     
     return 0;
}