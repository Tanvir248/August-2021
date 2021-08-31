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
const int N = int(150000);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll temp[300];
ll dp[N];
ls s;
ll st[300][200];
void solve(){   
   freopen("input.txt", "r", stdin);
    cin>>s;
    ll t;
    cin>>t;
    while(t--){
        ls b;
        cin>>b;
        st[b[0]][b[1]]=1;
        st[b[1]][b[0]]=1;
    }
    ll ans =0;
    for (ll i = 0; i <s.sz; i++)
    {
        if(i==0){
            dp[i]=1;
            temp[s[i]]=1;
        }
        else{
 for(int j='a';j<='z';j++) 
    {
      if(st[s[i]][j]==0) 
     {  
       dp[i]=max(dp[i],temp[j]+1); 
          } 
            }
          temp[s[i]]=max(temp[s[i]],dp[i]);
             }
              ans=max(ans,dp[i]);
                  }      
        cout<<s.sz-ans<<endl;
        }
int main(){
     speed();

       solve();  
     
     return 0;
}