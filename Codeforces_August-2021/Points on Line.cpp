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
void solve(){   
   //freopen("input.txt", "r", stdin);
   lln n, m, num;
	cin>>n>>m;
	vi add(n);
	for ( auto&x:add)
	{
		cin>>x;
	}
lln ans =0;	
	for (lln i = 0; i < add.sz; i++)
	{
		lln temp = upper_bound(add.B, add.E, add[i]+m)-add.B;
		temp =temp-i-1;
		if(temp>1){
			ans+=(temp*(temp-1))>>1;
		}
	}
	cout<<ans<<endl;
}
int main(){
     speed();
   solve();  
     return 0;
}