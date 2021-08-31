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
const int N = int(1e5 + 10);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
} 
ll ans[N];
ll n,cnt;
void solve(){   
    ll t, cur;
    for(ll i=2;i<=n;i++){
        t=i;
        for(ll j=2;j*j<=t;j++){
            if(t%j==0){
              cur=1;
                while(t%j==0) t/=j,cur*=j;
                ans[++cnt]=cur;
            }
        }
        if(t!=1) ans[++cnt]=t;
    }
    sort(ans+1,ans+cnt+1);
    cnt=unique(ans+1,ans+cnt+1)-ans-1;
    if(cnt==0) 
    cout<<0<<endl;
    else{
		cout<<cnt<<endl;
        for(ll i=1;i<=cnt;i++) 
        cout<<ans[i]<<" ";
        ed
    }
}
int main(){
     speed();
//freopen("input.txt", "r", stdin);
   
cin>>n;
       solve();  
     
     return 0;
}
