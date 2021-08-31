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
ll solve(ll n, ls s){   
   ll ans =0;
    string st_ans = s;
    sort(st_ans.B, st_ans.end());
 
    for (int i = 0; i < n; i++){
        ans += (s[i] != st_ans[i]);
	}
	return ans;
 }
int main(){
     speed();   
	// freopen("input.txt", "r", stdin);

 ll t;
 cin>>t;
 while (t--)
 {
	ll n;
	ls a;
	cin>>n;
	cin>>a;
	cout<<solve(n, a);
	ed 
 }
 //  solve();  
     
     return 0;
}