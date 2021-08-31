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
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

ll n, m;
ls s[22], t[22];
void solve(){   
   //freopen("input.txt", "r", stdin);
  cin >> n >> m;
	for(int i=0; i<n; i++) cin >> s[i];
	for(int i=0; i<m; i++) cin >> t[i];
	int q; cin >> q;
	while(q--){
		int x;
		 cin >> x; x--;
		cout<<(s[x % n] + t[x % m]);
		ed
	}

}
int main(){
     speed();

      solve();  
    
     return 0;
}