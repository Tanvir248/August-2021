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
const int N = int(1e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
int arr[N], q, minq;

bool cmp(int a, int b) {
    return a > b;
}

int solve(ll m) {
    int  n;
        memset(arr, 0, sizeof(arr));
        minq = INF;
        for(int i = 0; i < m; i++) {
            cin>>q;
            minq = min(minq, q);
        }
		cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n, cmp);
        int cur = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(cur == minq) {
                cur = 0;
                i += 2;
            }
            cur++;
            ans+= arr[i];
        }
    return ans;
}
int main(){
	speed();
	ll a;
	cin>>a;
	cout<<solve(a);
	ed
}