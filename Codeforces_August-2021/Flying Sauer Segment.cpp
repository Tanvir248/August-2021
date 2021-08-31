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

lln power(lln a, ll p) {
	if(p == 0)
		return 1;

lln res = power(a, p >> 1) % m;
	res = (res * res) % m;

	if(p & 1)
		res = (res * a) % m;

	return res;
}

int main() {
    cin>>n>>m;

	lln lst = power(3, n) - 1;
	if(lst >= 0)
    cout<<lst;
	else
    cout<<lst+m;
ed
	return 0;
}
