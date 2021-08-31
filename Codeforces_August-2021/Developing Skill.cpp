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
int arr[N], b[N], ans;
ll solve(){   
 //  freopen("input.txt", "r", stdin);
   
    int n, k;
   cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
			ans += arr[i] / 10;
            b[i] = arr[i] % 10;
        }
        sort(b, b + n);
        for (int i = n - 1; i >= 0; i--)
        {
            if (k - 10 + b[i] >= 0)
            {
                ans++;
                k = k - 10 + b[i];
                if (k >= 10 && i == 0) ans += k / 10;
                if (ans >= 10 * n)  ans = 10 * n;
            }

            else break;
        }
       return ans;
}
int main(){
     speed();

     cout<<  solve();  
     ed
     return 0;
}