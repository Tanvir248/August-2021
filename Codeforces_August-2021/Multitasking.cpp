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

int a[1005][105];
void solve(){   
  // freopen("input.txt", "r", stdin);
   ll n,m,k;
   cin>>n>>m>>k;
   for(int i = 1;i <= n;i++) {
        for(int j = 1;j <= m;j++) {
            cin>>a[i][j];
        }
    }
    
    cout<<m*(m-1)/2<<endl;
    
    for(int i = 1;i <= m;i++) {
        if(k == 0) {
            for(int j = 1;j <= m - i;j++) {
                cout<<j<<" "<<j + 1<<endl;
            }
        } else {
            for(int j = m - 1;j >= i;j--) {
               cout<<j + 1<<" "<<j<<endl;
            }
        }
    }
    
}
int main(){
     speed();

       solve();  
     
     return 0;
}