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
ll n, k;
void solve(){   
   //freopen("input.txt", "r", stdin);
	ll i, j;
	cin>>n>>k;
ll arr[n];
	if(n<3*k)
    {
		cout<<-1;
		ed
    }else{
    for(i=2, j=1; j<=k; i+=2, j++)
        arr[i-1]=arr[i]=arr[2*k+i/2]=j;
    for(i=3*k+1; i<=n; i++)
        arr[i]=1;
     for(i=1;i<=n;i++)
        cout<<arr[i]<<" ";
ed
}
}
int main(){
     speed();

       solve();  
     
     return 0;
}