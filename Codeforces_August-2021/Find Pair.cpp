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
const int N = int(1e5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
struct data{
	lln count;
	ll value;
}M[N];
bool cmp(data a,data b){
	if( a.value < b.value)
	return true;
	return false;
}
void solve(lln n, lln k){
	
		map<lln, ll> T;
		
		ll ptr = 0;
		lln a, b, sum, left;
		for (int i = 0; i < n; i++){
			long long int tmp;
			cin>>tmp;
			T[tmp]++;
		}
		for (map<lln, ll>::iterator iter = T.begin(); iter != T.end(); iter++){
			M[ptr].value = iter->first;
			M[ptr].count = iter->second;
			ptr++;
		}
		sort(M, M + ptr, cmp);
		for (a = sum = 0; sum < k; sum += M[a++].count*n);
		sum -= M[--a].count*n;
		
		for (b = left = 0; left < k - sum; left += M[a].count*M[b++].count);
		b--;
		

		cout<<M[a].value<<" "<<M[b].value<<endl;
}
int main(){
	speed();
lln a, b;
cin>>a>>b;
	solve(a, b);
		return 0;
}