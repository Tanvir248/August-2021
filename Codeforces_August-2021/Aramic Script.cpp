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
ls s;
set<ll>st;
ll solve(){   
   //freopen("input.txt", "r", stdin);
     int n;
 cin>>n;
    for(int i=0;i<n;++i)
    {
		cin>>s;
		int ans = 0;
        for(int j=0;j<s.sz;++j)
            ans = ans | (1<<(s[j]-'a'));
        st.insert(ans);
    }
	return st.sz;
}
int main(){
     speed();

      cout<< solve();  
     ed
     return 0;
}