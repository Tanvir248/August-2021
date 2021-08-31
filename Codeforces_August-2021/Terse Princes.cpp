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
void solve(){   
   //freopen("input.txt", "r", stdin);
   ll n, a, b;
   cin>>n>>a>>b;
   ll sum = n-(a+b);
   if(n==1){
       cout<<1<<endl;
       return;
   }
   if(n==a+1){
       cout<<-1<<endl;
       return;
   }
   if(b==0){
       cout<<1;
       for (ll i = 0; i < sum-1; i++)
       {
           cout<<" "<<1;
       }
       for (ll i = 0; i < a; i++)
       {
           cout<<" "<<sum++;
       }
       ed
   }else{
       cout<<1;
       ll cnt=1;
       for (ll i = 0; i < b; i++)
       {
           cnt+=cnt;
        cout<<" "<<cnt;
       }
       for (ll i = 0; i < a; i++)
       {
           cnt++;
        cout<<" "<<cnt;
       }
       for (ll i = 0; i < sum-1; i++)
       {
           cout<<" "<<1;
       }
       ed
   }
}
int main(){
     speed();

       solve();  
     
     return 0;
}